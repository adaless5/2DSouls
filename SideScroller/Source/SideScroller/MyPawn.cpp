// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InputComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "PaperSpriteComponent.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "BeastPawn.h"


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

	if (!m_CurrentVelocity.IsZero() && m_PlayerState != UPlayerState::Shielding)
	{
		FVector NewLocation = GetActorLocation() + (m_CurrentVelocity * DeltaTime);
		SetActorLocation(NewLocation);
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
		m_ActiveFlipBook->SetFlipbook(m_Attack);
		AttackPlaybackPositionInFrames = m_ActiveFlipBook->GetPlaybackPositionInFrames();
		AttackFlipbookLengthInFrames = m_ActiveFlipBook->GetFlipbookLengthInFrames();

		if (AttackPlaybackPositionInFrames == 5 || AttackPlaybackPositionInFrames == 11 || AttackPlaybackPositionInFrames == 18)
		{
			m_Box->AddImpulse(FVector(m_LastVelocity.X * m_AttackStepValue, 0.0f, 0.0f));
		}

		if (bIsOverlappingEnemy)
		{
			if (AttackPlaybackPositionInFrames == 5 || AttackPlaybackPositionInFrames == 11 || AttackPlaybackPositionInFrames == 18)
			{
				if (bSwordDamageActive)
				{
					if (m_RecentBeast != nullptr)
					{
						bSwordDamageActive = false;
						GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("Sword hit enemy"));
						
						m_RecentBeast->ApplyDamage(1); 
						m_RecentBeast->GetBoxComponent()->AddImpulse(FVector(m_LastVelocity.X * 20.0f, 0.0f, 0.0f)); 
					}
					
				}
			}
			else
			{
				bSwordDamageActive = true;
			}
		}
		break;
	case UPlayerState::Jumping:
		m_ActiveFlipBook->SetFlipbook(m_Jump);
		break;
	case UPlayerState::Shielding:
		m_ActiveFlipBook->SetFlipbook(m_Shield);
		break;
	case UPlayerState::Rolling:
		m_ActiveFlipBook->SetFlipbook(m_Roll);
		RollPlaybackPositionInFrames = m_ActiveFlipBook->GetPlaybackPositionInFrames();
		RollFlipbookLengthInFrames = m_ActiveFlipBook->GetFlipbookLengthInFrames();

		if (RollPlaybackPositionInFrames == RollFlipbookLengthInFrames - 1)
		{
			m_PlayerState = UPlayerState::Idle;
			m_ActiveFlipBook->SetLooping(true);
			m_ActiveFlipBook->PlayFromStart();
		}
		break;
	}

	if (m_CurrentVelocity.IsZero() && m_PlayerState != UPlayerState::Attacking && m_PlayerState != UPlayerState::Shielding && m_PlayerState != UPlayerState::Rolling && m_PlayerState != UPlayerState::Jumping)
	{
		m_PlayerState = UPlayerState::Idle;
	}
}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveX", this, &AMyPawn::Move_X_Axis); 
	PlayerInputComponent->BindAxis("MoveY", this, &AMyPawn::Move_Y_Axis); 

	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &AMyPawn::Attack); 
	PlayerInputComponent->BindAction("Attack", IE_Released, this, &AMyPawn::StopAttacking); 
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyPawn::Jump); 

	PlayerInputComponent->BindAction("Shield", IE_Pressed, this, &AMyPawn::Shield); 
	PlayerInputComponent->BindAction("Shield", IE_Released, this, &AMyPawn::ShieldRelease); 

	PlayerInputComponent->BindAction("Roll", IE_Pressed, this, &AMyPawn::Roll); 

	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AMyPawn::InteractWithBonfire);
}

void AMyPawn::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (HitComp->ComponentHasTag(TEXT("PlayerHitBox")))
	{
		if (OtherComp->ComponentHasTag("Ground") && m_PlayerState == UPlayerState::Jumping)
		{
			m_CurrentVelocity = FVector(0.0f, 0.0f, 0.0f); 
			//bCanJump = true;
			m_PlayerState = UPlayerState::Idle; 
		}
	}
}

void AMyPawn::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherComp != nullptr)
	{
		if (OtherComp->ComponentHasTag(TEXT("Enemy")))
		{
			m_RecentBeast = Cast<ABeastPawn>(OtherActor);

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
			m_RecentBeast = nullptr; 

			bIsOverlappingEnemy = false;
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Sword out of contact with enemy."));
		}
	}
}

void AMyPawn::SetIsNearBonfire(bool isNear)
{
	bIsNearBonfire = isNear; 
}

void AMyPawn::Move_X_Axis(float value)
{
	if (m_PlayerState != UPlayerState::Shielding && m_PlayerState != UPlayerState::Attacking && m_PlayerState != UPlayerState::Rolling && m_PlayerState != UPlayerState::Jumping)
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
	if (m_PlayerState != UPlayerState::Shielding && m_PlayerState != UPlayerState::Attacking && m_PlayerState != UPlayerState::Rolling && m_PlayerState != UPlayerState::Jumping)
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
	if (m_PlayerState != UPlayerState::Jumping && m_PlayerState != UPlayerState::Rolling && m_PlayerState != UPlayerState::Shielding)
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

void AMyPawn::StopAttacking()
{
	if (m_PlayerState != UPlayerState::Jumping && m_PlayerState != UPlayerState::Rolling && m_PlayerState != UPlayerState::Shielding)
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
	if (m_PlayerState != UPlayerState::Jumping && m_PlayerState != UPlayerState::Attacking && m_PlayerState != UPlayerState::Shielding && m_PlayerState != UPlayerState::Rolling)
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
	if (m_PlayerState != UPlayerState::Rolling)
	{
		m_CurrentVelocity = FVector(0.0f, 0.0f, 0.0f);
		m_PlayerState = UPlayerState::Rolling;
		m_ActiveFlipBook->SetFlipbook(m_Roll); 
		//m_ActiveFlipBook->SetLooping(false);
		m_ActiveFlipBook->PlayFromStart();
		m_Box->AddImpulse(FVector(m_LastVelocity.X * m_RollValue, 0.0f, 0.0f));
	}
}

void AMyPawn::Shield()
{
	m_PlayerState = UPlayerState::Shielding;
	m_ActiveFlipBook->SetFlipbook(m_Shield); 
	m_ActiveFlipBook->SetLooping(false);	
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
		bIsInMenu = true;
		GEngine->AddOnScreenDebugMessage(-1, 0.5, FColor::Yellow, TEXT("Interacted with bonfire."));
	}
}

UPlayerState AMyPawn::GetPlayerState()
{
	return m_PlayerState;
}
