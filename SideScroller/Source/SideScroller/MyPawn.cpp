// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "PaperSpriteComponent.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "BeastPawn.h"
//#include "EnemyCharacter.h"
#include "EnemyPawn.h"
#include "TimerManager.h"
#include "SideScroller/SideScrollerGameModeBase.h"
#include "MainPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "EXPActor.h"


// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box")); 
	m_Box->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics); 
	m_Box->SetCollisionProfileName("BlockAllDynamic"); 
	m_Box->SetNotifyRigidBodyCollision(true); 
	m_Box->SetGenerateOverlapEvents(true); 
	m_Box->SetSimulatePhysics(true);
	m_Box->BodyInstance.bLockXRotation = true;
	m_Box->BodyInstance.bLockYRotation = true;
	m_Box->BodyInstance.bLockZRotation = true;
	m_Box->SetEnableGravity(true); 
	m_Box->OnComponentHit.AddDynamic(this, &AMyPawn::OnHit); 
	m_Box->ComponentTags.Add(TEXT("PlayerHitBox")); 
	RootComponent = m_Box; 

	m_AttackHitBox = CreateDefaultSubobject<UBoxComponent>(TEXT("AttackHitBox"));
	m_AttackHitBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	m_AttackHitBox->SetCollisionProfileName("OverlapAll");
	m_AttackHitBox->SetGenerateOverlapEvents(true);
	m_AttackHitBox->SetSimulatePhysics(false);
	m_AttackHitBox->OnComponentBeginOverlap.AddDynamic(this, &AMyPawn::OnOverlapBegin); 
	m_AttackHitBox->OnComponentEndOverlap.AddDynamic(this, &AMyPawn::OnOverlapEnd); 
	m_AttackHitBox->ComponentTags.Add(TEXT("SwordHitBox")); 
	m_AttackHitBox->SetupAttachment(RootComponent);

	m_Run = CreateDefaultSubobject<UPaperFlipbook>(TEXT("Run")); 
	m_Idle = CreateDefaultSubobject<UPaperFlipbook>(TEXT("Idle"));
	m_Attack = CreateDefaultSubobject<UPaperFlipbook>(TEXT("Attack")); 
	m_Roll = CreateDefaultSubobject<UPaperFlipbook>(TEXT("Roll")); 
	m_Shield = CreateDefaultSubobject<UPaperFlipbook>(TEXT("Shield")); 
	m_Jump = CreateDefaultSubobject<UPaperFlipbook>(TEXT("Jump")); 
	m_Dead = CreateDefaultSubobject<UPaperFlipbook>(TEXT("Dead")); 

	m_ActiveFlipBook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("ActiveFlipbook")); 
	m_ActiveFlipBook->SetupAttachment(RootComponent); 

	m_SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm")); 
	m_SpringArm->SetupAttachment(RootComponent); 

	m_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera")); 
	m_Camera->SetOrthoWidth(2500.0f); 
	m_Camera->SetProjectionMode(ECameraProjectionMode::Orthographic); 
	m_Camera->SetupAttachment(m_SpringArm);
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	m_PlayerState = UPlayerState::Idle; 
	m_CurrentVelocity = FVector(0.0f, 0.0f, 0.0f); 
	m_LastVelocity = FVector(1.0f, 0.0f, 0.0f); 

}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_PlayerState != UPlayerState::Dead)
	{
		if (!m_CurrentVelocity.IsZero() && m_PlayerState != UPlayerState::Shielding)
		{
			FVector NewLocation = GetActorLocation() + (m_CurrentVelocity * DeltaTime);
			SetActorLocation(NewLocation);
		}
	}

	m_AttackHitBox->SetWorldLocation(GetActorLocation() + FVector(0.08 * m_LastVelocity.X, 0.0f, 6.0f));

	//Setting animations via player states. This will perform other functions as well shortly

	switch (m_PlayerState) {
	case UPlayerState::Idle:
		m_ActiveFlipBook->SetFlipbook(m_Idle); 
		break; 
	case UPlayerState::Running:
		m_ActiveFlipBook->SetFlipbook(m_Run);
		break;
	case UPlayerState::Attacking:
		if (m_PlayerState != UPlayerState::Dead && m_CurrentStamina - 1.0f >= 0.0f)
		{
			m_ActiveFlipBook->SetFlipbook(m_Attack);
			AttackPlaybackPositionInFrames = m_ActiveFlipBook->GetPlaybackPositionInFrames();
			AttackFlipbookLengthInFrames = m_ActiveFlipBook->GetFlipbookLengthInFrames();
			bIsRefillingStamina = false;

			if (AttackPlaybackPositionInFrames == 5 || AttackPlaybackPositionInFrames == 11 || AttackPlaybackPositionInFrames == 18)
			{
				if (bStaminaReductionActive)
				{
					UWorld* World = GetWorld();
					if (World)
					{
						World->GetTimerManager().ClearTimer(m_RefillStaminaTimerHandle);
						World->GetTimerManager().SetTimer(m_RefillStaminaTimerHandle, this, &AMyPawn::RefillStamina, m_RefillStaminaTimerRate, false, m_RefillStaminaTimerRate);
					}
					m_CurrentStamina -= 1.0f;
					m_Box->AddImpulse(FVector(m_LastVelocity.X * m_AttackStepValue, 0.0f, 0.0f));
					bStaminaReductionActive = false;
				}

				GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("Current Stamina: " + FString::FromInt(m_CurrentStamina))); 

				if (bIsOverlappingEnemy)
				{
					if (bSwordDamageActive)
					{
						if (m_RecentEnemy != nullptr)
						{
							bSwordDamageActive = false;

							m_RecentEnemy->ApplyDamage(1);
							m_RecentEnemy->GetBoxComponent()->AddImpulse(FVector(m_LastVelocity.X * 20.0f, 0.0f, 0.0f));

							//Debug
							GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("Sword hit enemy"));
						}
					}
				}
			}
			else
			{
				bSwordDamageActive = true;
				bStaminaReductionActive = true; 
			}
		}
		else if (m_CurrentStamina - 1.0f < 0.0)
		{
			bStaminaReductionActive = false;
			m_PlayerState = UPlayerState::Idle;
			m_ActiveFlipBook->SetFlipbook(m_Idle);
		}
		break;
	case UPlayerState::Jumping:
		m_ActiveFlipBook->SetFlipbook(m_Jump);
		break;
	case UPlayerState::Shielding:
		m_ActiveFlipBook->SetFlipbook(m_Shield);
		break;
	case UPlayerState::Rolling:
		
		if (bStaminaReductionActive)
		{
			if (m_CurrentStamina - 2.0f >= 0.0f)
			{
				UWorld* World = GetWorld();
				if (World)
				{
					World->GetTimerManager().ClearTimer(m_RefillStaminaTimerHandle);
					World->GetTimerManager().SetTimer(m_RefillStaminaTimerHandle, this, &AMyPawn::RefillStamina, m_RefillStaminaTimerRate, false, m_RefillStaminaTimerRate);
				}
				m_ActiveFlipBook->SetFlipbook(m_Roll);

				GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("Current Stamina: " + FString::FromInt(m_CurrentStamina)));

				bStaminaReductionActive = false;
			}
		}
		RollPlaybackPositionInFrames = m_ActiveFlipBook->GetPlaybackPositionInFrames();
		RollFlipbookLengthInFrames = m_ActiveFlipBook->GetFlipbookLengthInFrames();
		if (RollPlaybackPositionInFrames == RollFlipbookLengthInFrames - 1)
		{
			m_PlayerState = UPlayerState::Idle;
			m_ActiveFlipBook->SetLooping(true);
			m_ActiveFlipBook->PlayFromStart();
			bStaminaReductionActive = true; 

			UWorld* World = GetWorld();
			if (World)
			{
				World->GetTimerManager().ClearTimer(m_RefillStaminaTimerHandle);
				World->GetTimerManager().SetTimer(m_RefillStaminaTimerHandle, this, &AMyPawn::RefillStamina, m_RefillStaminaTimerRate, false, m_RefillStaminaTimerRate);
			}
		}
		break;
	case UPlayerState::Dead:
		m_ActiveFlipBook->SetFlipbook(m_Dead); 
		m_ActiveFlipBook->SetLooping(false); 
	}

	if (m_CurrentVelocity.IsZero() && m_PlayerState != UPlayerState::Attacking && m_PlayerState != UPlayerState::Shielding && m_PlayerState != UPlayerState::Rolling && m_PlayerState != UPlayerState::Jumping && m_PlayerState != UPlayerState::Dead)
	{
		m_PlayerState = UPlayerState::Idle;
	}

	if (bIsRefillingStamina)
	{
		m_CurrentStamina += DeltaTime; 

		if (m_CurrentStamina >= m_MaxStamina)
		{
			m_CurrentStamina = m_MaxStamina; 
			bIsRefillingStamina = false; 
		}
	}
}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyPawn::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (HitComp->ComponentHasTag(TEXT("PlayerHitBox")))
	{
		if (OtherComp->ComponentHasTag("Ground") && m_PlayerState == UPlayerState::Jumping && m_PlayerState != UPlayerState::Dead)
		{
			m_CurrentVelocity = FVector(0.0f, 0.0f, 0.0f); 
			//bCanJump = true;
			m_PlayerState = UPlayerState::Idle; 
		}
		if (AEXPActor* pEXP = Cast<AEXPActor>(OtherActor))
		{
			m_TotalExperience += pEXP->GetExperienceValue();

			FString experiencepoints = FString::FromInt(m_TotalExperience); 
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("Total Exp: " + experiencepoints)); 

			pEXP->Destroy(); 
		}
	}
}

void AMyPawn::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherComp != nullptr)
	{
		if (OtherComp->ComponentHasTag(TEXT("Enemy")))
		{
			//m_RecentBeast = Cast<ABeastPawn>(OtherActor);
			m_RecentEnemy = Cast<AEnemyPawn>(OtherActor); 

			bIsOverlappingEnemy = true;
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Sword in contact with enemy."));
		}
	}
}

void AMyPawn::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherComp != nullptr)
	{
		if (OtherComp->ComponentHasTag(TEXT("Enemy")))
		{
			//m_RecentBeast = nullptr; 
			m_RecentEnemy = nullptr; 
			bIsOverlappingEnemy = false;

			//Debug
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Sword out of contact with enemy."));
		}
	}
}

void AMyPawn::SetIsNearBonfire(bool isNear)
{
	bIsNearBonfire = isNear; 
}

void AMyPawn::ApplyDamage(float damage)
{
	if (m_PlayerState != UPlayerState::Dead)
	{
		if (bCanBeDamaged == true)
		{
			UWorld* World = GetWorld();
			if (World)
			{
				World->GetTimerManager().ClearTimer(m_InvincibilityTimerHandle);
				World->GetTimerManager().SetTimer(m_InvincibilityTimerHandle, this, &AMyPawn::SetCanBeDamaged, m_InvincibiltyTimerRate, false, m_InvincibiltyTimerRate);
			}
			m_CurentHealth -= damage;
			if (m_CurentHealth < 1)
			{
				//m_TotalHealth = 0;
				m_PlayerState = UPlayerState::Dead;
				return;
			}
			bCanBeDamaged = false;
		}
	}
}

void AMyPawn::SetCanBeDamaged()
{
	bCanBeDamaged = true; 
}

void AMyPawn::IncreaseMaxHealth(float StatIncrease)
{
	m_MaxHealth += StatIncrease; 
	m_CurentHealth = m_MaxHealth; 

	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Purple, TEXT("New Max Health: " + FString::FromInt(m_MaxHealth))); 
}

void AMyPawn::IncreaseMaxStamina(float StatIncrease)
{
	m_MaxStamina += StatIncrease;
	m_CurrentStamina = m_MaxStamina;

	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Purple, TEXT("New Max Stamina: " + FString::FromInt(m_MaxStamina)));

}

float AMyPawn::GetMaxHealth()
{
	return m_MaxHealth;
}

float AMyPawn::GetMaxStamina()
{
	return m_MaxStamina;
}

float AMyPawn::GetHealthPercentage()
{
	return m_CurentHealth / m_MaxHealth;
}

float AMyPawn::GetStaminaPercentage()
{
	return m_CurrentStamina / m_MaxStamina;
}

int AMyPawn::GetTotalExperience()
{
	return m_TotalExperience;
}

void AMyPawn::SetIsInMenu(bool IsInMenu)
{
	bIsInMenu = IsInMenu; 
}

void AMyPawn::RefillStamina()
{
	bIsRefillingStamina = true; 
}

void AMyPawn::SpendEXP(int value)
{
	m_TotalExperience -= value; 
}

void AMyPawn::Move_X_Axis(float value)
{
	if (m_PlayerState != UPlayerState::Shielding && m_PlayerState != UPlayerState::Attacking && m_PlayerState != UPlayerState::Rolling && m_PlayerState != UPlayerState::Jumping && m_PlayerState != UPlayerState::Dead)
	{
		m_CurrentVelocity.X = FMath::Clamp(value, -1.0f, 1.0f) * 200.0f;

		if (m_CurrentVelocity.X > 0)
		{
			m_PlayerState = UPlayerState::Running;
			m_ActiveFlipBook->SetRelativeRotation(FRotator(0.0, 0.0f, 0.0f));

			m_LastVelocity = m_CurrentVelocity;
		}
		if (m_CurrentVelocity.X < 0)
		{
			m_PlayerState = UPlayerState::Running;
			m_ActiveFlipBook->SetRelativeRotation(FRotator(0.0, 180.0f, 0.0f));

			m_LastVelocity = m_CurrentVelocity;
		}
	}	
}

void AMyPawn::Move_Y_Axis(float value)
{
	if (m_PlayerState != UPlayerState::Shielding && m_PlayerState != UPlayerState::Attacking && m_PlayerState != UPlayerState::Rolling && m_PlayerState != UPlayerState::Jumping && m_PlayerState != UPlayerState::Dead)
	{
		m_CurrentVelocity.Y = FMath::Clamp(value, -1.0f, 1.0f) * 200.0f;

		if (m_CurrentVelocity.Y != 0)
		{
			m_PlayerState = UPlayerState::Running; 

			if (m_LastVelocity.X > 0)
				m_ActiveFlipBook->SetRelativeRotation(FRotator(0.0, 0.0f, 0.0f));

			if (m_LastVelocity.X < 0)
				m_ActiveFlipBook->SetRelativeRotation(FRotator(0.0, 180.0f, 0.0f));
		}
	}
}

void AMyPawn::Attack()
{
	if (m_CurrentStamina - 1 >= 0.0f)
	{
		if (m_PlayerState != UPlayerState::Jumping && m_PlayerState != UPlayerState::Rolling && m_PlayerState != UPlayerState::Shielding && m_PlayerState != UPlayerState::Dead)
		{
			m_PlayerState = UPlayerState::Attacking;
			m_ActiveFlipBook->SetFlipbook(m_Attack);

			m_CurrentVelocity = FVector(0.0f, 0.0f, 0.0f);

			if (m_LastVelocity.X > 0)
			{
				m_ActiveFlipBook->SetRelativeRotation(FRotator(0.0, 0.0f, 0.0f));
			}
			if (m_LastVelocity.X < 0)
			{
				m_ActiveFlipBook->SetRelativeRotation(FRotator(0.0, 180.0f, 0.0f));
			}
		}
	}
	else
	{
		m_PlayerState = UPlayerState::Idle; 
		m_ActiveFlipBook->SetFlipbook(m_Idle); 
	}
}

void AMyPawn::StopAttacking()
{
	if (m_PlayerState != UPlayerState::Jumping && m_PlayerState != UPlayerState::Rolling && m_PlayerState != UPlayerState::Shielding && m_PlayerState != UPlayerState::Dead)
	{
		m_PlayerState = UPlayerState::Idle; 
		//m_ActiveFlipBook->SetFlipbook(m_Idle);

		if (m_LastVelocity.X > 0)
		{
			m_ActiveFlipBook->SetRelativeRotation(FRotator(0.0, 0.0f, 0.0f));
		}
		if (m_LastVelocity.X < 0)
		{
			m_ActiveFlipBook->SetRelativeRotation(FRotator(0.0, 180.0f, 0.0f));
		}
	}
}

void AMyPawn::Jump()
{
	if (m_PlayerState != UPlayerState::Jumping && m_PlayerState != UPlayerState::Attacking && m_PlayerState != UPlayerState::Shielding && m_PlayerState != UPlayerState::Rolling && m_PlayerState != UPlayerState::Dead)
	{
		m_PlayerState = UPlayerState::Jumping;
		m_ActiveFlipBook->SetFlipbook(m_Jump);
		m_CurrentVelocity = FVector(0.0f, 0.0f, 0.0f);
		//bCanJump = false;
		m_Box->AddImpulse(FVector(m_LastVelocity.X, 0.0f, 1.0f) * m_JumpValue);
	}
}

void AMyPawn::Roll()
{
	if (m_CurrentStamina - 2.0f >= 0.0f)
	{
		if (m_PlayerState != UPlayerState::Rolling && m_PlayerState != UPlayerState::Dead)
		{
			bIsRefillingStamina = false;
			m_CurrentStamina -= 2.0f;
			m_CurrentVelocity = FVector(0.0f, 0.0f, 0.0f);
			m_PlayerState = UPlayerState::Rolling;
			m_ActiveFlipBook->SetFlipbook(m_Roll); 
			//m_ActiveFlipBook->SetLooping(false);
			m_ActiveFlipBook->PlayFromStart();
			m_Box->AddImpulse(FVector(m_LastVelocity.X * m_RollValue, 0.0f, 0.0f));
		}
	}
}

void AMyPawn::Shield()
{
	if (m_PlayerState != UPlayerState::Rolling)
	{
		m_PlayerState = UPlayerState::Shielding;
		m_ActiveFlipBook->SetFlipbook(m_Shield);
		m_ActiveFlipBook->SetLooping(false);
	}
}

void AMyPawn::ShieldRelease()
{
	if (m_PlayerState != UPlayerState::Rolling)
	{
		m_PlayerState = UPlayerState::Idle; 
		m_ActiveFlipBook->SetLooping(true);
		m_ActiveFlipBook->PlayFromStart();
	}
	else if (m_PlayerState != UPlayerState::Rolling)
	{
		return;
	}
}

void AMyPawn::InteractWithBonfire()
{
	if (bIsNearBonfire == true && bIsInMenu == false)
	{
		UWorld* World = GetWorld(); 

		if (World)
		{
			if (ASideScrollerGameModeBase* pGameMode = Cast<ASideScrollerGameModeBase>(World->GetAuthGameMode()))
			{
				bIsInMenu = true;
				GEngine->AddOnScreenDebugMessage(-1, 0.5, FColor::Yellow, TEXT("Interacted with bonfire."));
				pGameMode->ChangeMenuWidget(m_BonfireMenuWidget);

				AMainPlayerController* pPC = Cast<AMainPlayerController>(UGameplayStatics::GetPlayerController(World, 0));
				pPC->bShowMouseCursor = true;
			}
		}
	}
}

void AMyPawn::PauseGame()
{
	if (!bIsInMenu)
	{
		UWorld* World = GetWorld();

		if (World)
		{
			if (ASideScrollerGameModeBase* pGameMode = Cast<ASideScrollerGameModeBase>(World->GetAuthGameMode()))
			{
				bIsInMenu = true;
				pGameMode->ChangeMenuWidget(m_PauseMenuWidget);

				AMainPlayerController* pPC = Cast<AMainPlayerController>(UGameplayStatics::GetPlayerController(World, 0));
				pPC->bShowMouseCursor = true;
			}
		}
	}
}

UPlayerState AMyPawn::GetPlayerState()
{
	return m_PlayerState;
}
