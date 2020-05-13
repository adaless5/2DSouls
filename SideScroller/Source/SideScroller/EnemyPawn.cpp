// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPawn.h"
#include "Components/BoxComponent.h"
#include "PaperSpriteComponent.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "Engine/World.h"
#include "SideScroller/SideScrollerGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "MyPawn.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "EXPActor.h"
#include "Components/SphereComponent.h"

// Sets default values
AEnemyPawn::AEnemyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_BodyHitBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BodyHitBox"));
	m_BodyHitBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	m_BodyHitBox->SetNotifyRigidBodyCollision(true);
	m_BodyHitBox->SetGenerateOverlapEvents(true);
	m_BodyHitBox->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	m_BodyHitBox->SetSimulatePhysics(true);
	m_BodyHitBox->SetEnableGravity(true);
	m_BodyHitBox->BodyInstance.bLockXRotation = true;
	m_BodyHitBox->BodyInstance.bLockYRotation = true;
	m_BodyHitBox->BodyInstance.bLockZRotation = true;
	m_BodyHitBox->ComponentTags.Add(TEXT("Enemy"));
	m_BodyHitBox->OnComponentHit.AddDynamic(this, &AEnemyPawn::OnHit); 
	RootComponent = m_BodyHitBox;

	m_ActiveFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("ActiveFlipbook"));
	m_ActiveFlipbook->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	m_ActiveFlipbook->SetCollisionProfileName(TEXT("NoCollision"));
	m_ActiveFlipbook->SetLooping(true); 
	m_ActiveFlipbook->SetupAttachment(RootComponent);

	m_IdleFlipbook = CreateDefaultSubobject<UPaperFlipbook>(TEXT("IdleAnimation"));
	m_DeathFlipbook = CreateDefaultSubobject<UPaperFlipbook>(TEXT("DeathAnimation"));
	m_RunningFlipbook = CreateDefaultSubobject<UPaperFlipbook>(TEXT("RunningAnimation"));
	m_AttackingFlipbook = CreateDefaultSubobject<UPaperFlipbook>(TEXT("AttackingAnimation"));
}

// Called when the game starts or when spawned
void AEnemyPawn::BeginPlay()
{
	Super::BeginPlay();
	SetEnemyState(Enemy_Idle);

	if (AMyPawn* tempPawn = Cast<AMyPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0)))
		m_Player = tempPawn;

	UWorld* World = GetWorld(); 
	if (World)
	{
		World->GetTimerManager().SetTimer(m_StartPatrolTimerHandle, this, &AEnemyPawn::StartPatrol, m_StartPatrolTimerRate, false, m_StartPatrolTimerRate); 
	}
}

// Called every frame
void AEnemyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_TotalHealth <= 0)
	{
		//m_ActiveFlipbook->SetFlipbook(m_DeathFlipbook); 
		if (m_CurrentState != Enemy_Dead)
		{
			m_BodyHitBox->SetSimulatePhysics(false);
			m_BodyHitBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			m_BodyHitBox->SetCollisionProfileName("NoCollision");

			SetEnemyState(Enemy_Dead);

			/*for (int i = 0; i < m_NumberOfExperience; i++)
			{
				SpawnExperience();
			}*/

			UWorld* World = GetWorld();

				if (World)
				{
					World->GetTimerManager().SetTimer(m_SpawnExperienceTimer, this, &AEnemyPawn::SpawnExperience, m_SpawnExperienceTimerRate, true); 
				}
		}

		DeathPlaybackPositionInFrames = m_ActiveFlipbook->GetPlaybackPositionInFrames();
		DeathFlipbookLengthInFrames = m_ActiveFlipbook->GetFlipbookLengthInFrames();

		if (DeathPlaybackPositionInFrames == DeathFlipbookLengthInFrames - 1)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, TEXT("Enemy slain."));
			
		}
	}

	if (m_CurrentState != Enemy_Dead)
	{
		if (m_CurrentState != Enemy_Attacking)
		{
			//SetActorLocation(FMath::VInterpTo(GetActorLocation(), m_Player->GetActorLocation(), DeltaTime, 2.0f)); 
			FVector TargetLocation = m_Player->GetActorLocation();
			FVector CurrentLocation = GetActorLocation();
			float DistanceFromTarget = FVector::Dist(TargetLocation, CurrentLocation);
			Velocity = TargetLocation - CurrentLocation;
			Velocity.Normalize();


			if (DistanceFromTarget <= m_AggroDistance && DistanceFromTarget > m_AttackDistance && m_Player->GetPlayerState() != UPlayerState::Dead)
			{
				//Enemy is withing following distance from target player.
				SetEnemyState(Enemy_Running); 
				if (Velocity.X > 0)
				{
					m_ActiveFlipbook->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f)); 
				}
				else if (Velocity.X < 0)
				{
					m_ActiveFlipbook->SetRelativeRotation(FRotator(0.0f, 180.0f, 0.0f)); 
				}
				FVector NewLocation = GetActorLocation() + (Velocity * DeltaTime * m_MovementSpeed);
				SetActorLocation(NewLocation);
			}
			else if(DistanceFromTarget <= m_AttackDistance && m_Player->GetPlayerState() != UPlayerState::Dead)
			{
				//Enemy is within attacking distance from target player.
				UWorld* World = GetWorld(); 
				if (World && m_CurrentState != Enemy_Attacking)
				{
					World->GetTimerManager().SetTimer(m_AttackTimerHandle, this, &AEnemyPawn::Attack, m_AttackTimerRate, false, m_AttackTimerRate);
				}
				SetEnemyState(Enemy_Attacking); 
				SetActorLocation(GetActorLocation());
			}
			else
			{
				//Enemy is out of range from the target player.
				if (m_CurrentState != Enemy_Patrolling)
				{
					UWorld* World = GetWorld(); 
					if (World && m_CurrentState != Enemy_Idle)
					{
						World->GetTimerManager().SetTimer(m_WaitTimerHandle, this, &AEnemyPawn::StartPatrol, m_WaitTimerRate, false, m_WaitTimerRate); 
					}

					SetEnemyState(Enemy_Idle); 
					SetActorLocation(GetActorLocation());
				}
				else if (m_CurrentState == Enemy_Patrolling)
				{
					FVector TargetPatrolLocation = m_PatrolPoints[m_PatrolPointIndex]->GetActorLocation();
					FVector CurrentPatrolLocation = GetActorLocation();
					float DistanceFromPatrolTarget = FVector::Dist(TargetPatrolLocation, CurrentPatrolLocation);
					Velocity = TargetPatrolLocation - CurrentPatrolLocation;
					Velocity.Normalize();

					if (Velocity.X > 0)
					{
						m_ActiveFlipbook->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
					}
					else if (Velocity.X < 0)
					{
						m_ActiveFlipbook->SetRelativeRotation(FRotator(0.0f, 180.0f, 0.0f));
					}

					FVector NewPatrolLocation = GetActorLocation() + Velocity * DeltaTime * m_MovementSpeed;
					SetActorLocation(NewPatrolLocation); 

					if (DistanceFromPatrolTarget <= 25.0f)
					{
						UWorld* World = GetWorld();
						if (World && m_CurrentState != Enemy_Idle)
						{
							World->GetTimerManager().ClearTimer(m_WaitTimerHandle); 
							World->GetTimerManager().SetTimer(m_WaitTimerHandle, this, &AEnemyPawn::FindNextPatrolPoint, m_WaitTimerRate, false, m_WaitTimerRate);
						}

						SetEnemyState(Enemy_Idle);
					}
				}
			}
		}
		else if (m_CurrentState == Enemy_Attacking)
		{
			AttackPlaybackPositionInFrames = m_ActiveFlipbook->GetPlaybackPositionInFrames(); 
			AttackFlipbookLengthInFrames = m_ActiveFlipbook->GetFlipbookLengthInFrames(); 

			if (AttackPlaybackPositionInFrames >= 8 && AttackPlaybackPositionInFrames < AttackFlipbookLengthInFrames - 1)
			{
				bDealDamageEnabled = true;
			}
			else if (AttackPlaybackPositionInFrames == AttackFlipbookLengthInFrames - 1)
			{
				GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("End of Enemy Attack"));
				bDealDamageEnabled = false; 
				SetEnemyState(Enemy_Idle); 
			}
		}
	}
}

// Called to bind functionality to input
void AEnemyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AEnemyPawn::ApplyDamage(int32 damage)
{
	m_TotalHealth -= damage;
}

void AEnemyPawn::SetEnemyState(UEnemyState newState)
{
	m_CurrentState = newState;

	switch (m_CurrentState)
	{
	case Enemy_Idle:
		m_ActiveFlipbook->SetFlipbook(m_IdleFlipbook);
		break;
	case  Enemy_Running:
		m_ActiveFlipbook->SetFlipbook(m_RunningFlipbook);
		break;
	case Enemy_Attacking:
		m_ActiveFlipbook->SetFlipbook(m_AttackingFlipbook);
		//m_ActiveFlipbook->SetLooping(false); 
		break;
	case Enemy_Dead:
		m_ActiveFlipbook->SetFlipbook(m_DeathFlipbook);
		m_ActiveFlipbook->PlayFromStart();
		m_ActiveFlipbook->SetLooping(false);
		break;
	case Enemy_Patrolling:
		m_ActiveFlipbook->SetFlipbook(m_RunningFlipbook); 
		break;
	}
}

void AEnemyPawn::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor)
	{
		if (AMyPawn* playerPawn = Cast<AMyPawn>(OtherActor))
		{
			if (bDealDamageEnabled)
			{
				GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, TEXT("Enemy made contact with player")); 
				playerPawn->ApplyDamage(1.0f); 
			}
		}
	}
}

void AEnemyPawn::Attack()
{
	if (m_CurrentState != Enemy_Dead && m_CurrentState != Enemy_Running && m_CurrentState != Enemy_Idle && m_CurrentState != Enemy_Patrolling)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("EnemyAttacks"));
		m_BodyHitBox->AddImpulse(FVector(Velocity.X * m_AttackForce, 0.0f, 0.0f));
		GetWorld()->GetTimerManager().ClearTimer(m_AttackTimerHandle);
	}
}

void AEnemyPawn::StartPatrol()
{
	UWorld* World = GetWorld(); 
	if (World)
	{
		World->GetTimerManager().ClearTimer(m_StartPatrolTimerHandle); 
	}

	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Blue, TEXT("Starting patrol."));
	float shortestDistance = 0; 
	float nearestNeighbourIndex = 0; 

	for (int i = 0; i < 3; i++)
	{
		FVector TargetLocation = m_PatrolPoints[i]->GetActorLocation();
		FVector CurrentLocation = GetActorLocation();
		float DistanceFromTarget = FVector::Dist(TargetLocation, CurrentLocation);
		if (i == 0)
		{
			shortestDistance = DistanceFromTarget; 
		}
		else
		{
			if (DistanceFromTarget <= shortestDistance)
			{
				shortestDistance = DistanceFromTarget; 
				nearestNeighbourIndex = i; 
			}
		}
	}

	m_PatrolPointIndex = nearestNeighbourIndex; 
	SetEnemyState(Enemy_Patrolling); 
}

void AEnemyPawn::FindNextPatrolPoint()
{
	SetEnemyState(Enemy_Patrolling); 
	m_PatrolPointIndex++;

	if (m_PatrolPointIndex > 2)
		m_PatrolPointIndex = 0;
}

void AEnemyPawn::SpawnExperience()
{
	if (m_ExperienceSpawnedCounter < m_NumberOfExperience)
	{
		if (EXPTemplate)
		{
			UWorld* World = GetWorld();

			if (World)
			{
				FActorSpawnParameters SpawnParams; 
				SpawnParams.Owner = this; 
				SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn; 
				FTransform SpawnTransform = GetActorTransform(); 
				AEXPActor* SpawnedEXP = World->SpawnActor<AEXPActor>(EXPTemplate, SpawnTransform, SpawnParams); 

				if (SpawnedEXP)
				{
					SpawnedEXP->SetExperienceValue(m_ExperienceValue); 
					float RandomX = FMath::RandRange(-500.0f, 500.0f);
					float RandomY = FMath::RandRange(-500.0f, 500.0f); 
					USphereComponent* pCollisionComponent = SpawnedEXP->GetSphereComponent(); 
					pCollisionComponent->AddImpulse(FVector(RandomX, RandomY, 500.0f)); 
				}
			}
		}
		m_ExperienceSpawnedCounter++; 
	}
	else
	{
		GetWorld()->GetTimerManager().ClearTimer(m_SpawnExperienceTimer); 
	}
}

UBoxComponent* AEnemyPawn::GetBoxComponent()
{
	return m_BodyHitBox;
}

