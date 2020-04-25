// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "PaperSpriteComponent.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"


// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box")); 
	m_Box->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics); 
	m_Box->SetCollisionProfileName("BlockAllDynamic"); 
	m_Box->SetNotifyRigidBodyCollision(true); 
	m_Box->SetSimulatePhysics(true);
	m_Box->BodyInstance.bLockXRotation = true;
	m_Box->BodyInstance.bLockYRotation = true;
	m_Box->BodyInstance.bLockZRotation = true;
	
	m_Box->SetEnableGravity(true); 
	m_Box->OnComponentHit.AddDynamic(this, &AMyPawn::OnHit); 
	RootComponent = m_Box; 

	m_Sprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite")); 
	m_Sprite->SetCollisionEnabled(ECollisionEnabled::NoCollision); 
	m_Sprite->SetCollisionProfileName("NoCollision"); 
	m_Sprite->SetSimulatePhysics(false); 
	m_Sprite->SetupAttachment(RootComponent); 

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

	m_ActiveFlipBook->SetFlipbook(m_Idle);
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsRolling == true)
	{
		PlaybackPositionInFrames = m_ActiveFlipBook->GetPlaybackPositionInFrames();
		FlipbookLengthInFrames = m_ActiveFlipBook->GetFlipbookLengthInFrames();

		if (PlaybackPositionInFrames == FlipbookLengthInFrames - 1)
		{
			bIsRolling = false; 
			bCanRoll = true; 
			m_ActiveFlipBook->SetFlipbook(m_Idle); 
		}
	}

	if (!m_CurrentVelocity.IsZero() && bIsAttacking == false && bIsBlocking == false )
	{	 
		FVector NewLocation = GetActorLocation() + (m_CurrentVelocity * DeltaTime); 
		SetActorLocation(NewLocation); 
	}

	if (m_CurrentVelocity.IsZero() && bIsAttacking == false && bIsJumping == false && bIsBlocking == false && bIsRolling == false)
	{
		m_ActiveFlipBook->SetFlipbook(m_Idle);
		
	}

	if (m_CurrentVelocity.X > 0 && bIsAttacking == false && bIsJumping == false && bIsBlocking == false && bIsRolling == false)
	{
		m_ActiveFlipBook->SetFlipbook(m_Run);
		m_ActiveFlipBook->SetRelativeRotation(FRotator(0.0, 0.0f, 0.0f));

		m_LastVelocity = m_CurrentVelocity; 
	}
	if (m_CurrentVelocity.X < 0 && bIsAttacking == false && bIsJumping == false && bIsBlocking == false && bIsRolling == false)
	{
		m_ActiveFlipBook->SetFlipbook(m_Run); 
		m_ActiveFlipBook->SetRelativeRotation(FRotator(0.0, 180.0f, 0.0f)); 

		m_LastVelocity = m_CurrentVelocity; 
		
	}
	if (m_CurrentVelocity.Y != 0 && bIsAttacking == false && bIsJumping == false && bIsBlocking == false && bIsRolling == false)
	{
		if (m_LastVelocity.X > 0)
		{
			m_ActiveFlipBook->SetFlipbook(m_Run);
			m_ActiveFlipBook->SetRelativeRotation(FRotator(0.0, 0.0f, 0.0f));
		}
		if (m_LastVelocity.X < 0)
		{
			m_ActiveFlipBook->SetFlipbook(m_Run);
			m_ActiveFlipBook->SetRelativeRotation(FRotator(0.0, 180.0f, 0.0f));
		}
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
}

void AMyPawn::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherComp->ComponentHasTag("Ground"))
	{
		bCanJump = true;
		bIsJumping = false;
		//m_ActiveFlipBook->SetFlipbook(m_Idle); 
	}
}

void AMyPawn::Move_X_Axis(float value)
{
	m_CurrentVelocity.X = FMath::Clamp(value, -1.0f, 1.0f) * 200.0f; 
}

void AMyPawn::Move_Y_Axis(float value)
{
	m_CurrentVelocity.Y = FMath::Clamp(value, -1.0f, 1.0f) * 200.0f; 
}

void AMyPawn::Attack()
{
	if (bIsBlocking == false && bIsRolling == false)
	{
		bIsAttacking = true;
		m_ActiveFlipBook->SetFlipbook(m_Attack);

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
	if (bIsBlocking == false && bIsRolling == false)
	{
		bIsAttacking = false;

		m_ActiveFlipBook->SetFlipbook(m_Idle);

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
	if (bCanJump == true && bIsBlocking == false)
	{
		bCanJump = false;
		bIsJumping = true;
		m_ActiveFlipBook->SetFlipbook(m_Jump);
		m_Box->AddImpulse(FVector(m_LastVelocity.X * 20.0f, 0.0f, 20000.0f));
	}
}

void AMyPawn::Roll()
{
	if (bIsAttacking == false && bIsRolling == false)
	{
		bIsRolling = true;
		bCanRoll = false;

		m_ActiveFlipBook->SetFlipbook(m_Roll);

		m_Box->AddImpulse(FVector(m_LastVelocity.X * 150.0f, 0.0f, 0.0f));
	}
}

void AMyPawn::Shield()
{
	if (bIsRolling == false)
	{
		bIsBlocking = true;

		m_ActiveFlipBook->SetFlipbook(m_Shield);
		m_ActiveFlipBook->SetLooping(false);
	}
}

void AMyPawn::ShieldRelease()
{
	if (bIsRolling == false)
	{
		bIsBlocking = false;

		m_ActiveFlipBook->SetFlipbook(m_Idle);
		m_ActiveFlipBook->SetLooping(true);
		m_ActiveFlipBook->PlayFromStart();
	}
}
