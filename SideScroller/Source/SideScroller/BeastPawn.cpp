// Fill out your copyright notice in the Description page of Project Settings.


#include "BeastPawn.h"
#include "Components/BoxComponent.h"
#include "PaperSpriteComponent.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"

// Sets default values
ABeastPawn::ABeastPawn()
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
	RootComponent = m_BodyHitBox;

	m_TestSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("TestSprite")); 
	m_TestSprite->SetCollisionEnabled(ECollisionEnabled::NoCollision); 

	m_IdleFlipbook = CreateDefaultSubobject<UPaperFlipbook>(TEXT("IdleAnimation")); 
	m_DeathFlipbook = CreateDefaultSubobject<UPaperFlipbook>(TEXT("DeathAnimation")); 

	m_ActiveFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("ActiveFlipbook")); 
	m_ActiveFlipbook->SetCollisionEnabled(ECollisionEnabled::NoCollision); 
	m_ActiveFlipbook->SetCollisionProfileName(TEXT("NoCollision")); 
	m_ActiveFlipbook->SetupAttachment(RootComponent); 
}

// Called when the game starts or when spawned
void ABeastPawn::BeginPlay()
{
	Super::BeginPlay();
	//m_CurrentState = UEnemyState::Idle; 
	m_ActiveFlipbook->SetFlipbook(m_IdleFlipbook); 
}

// Called every frame
void ABeastPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_TotalHealth <= 0)
	{
		//m_ActiveFlipbook->SetFlipbook(m_DeathFlipbook); 
		if (m_CurrentState != UEnemyState::Dead)
		{
			m_CurrentState = UEnemyState::Dead; 
			m_ActiveFlipbook->SetFlipbook(m_DeathFlipbook); 
			m_ActiveFlipbook->PlayFromStart(); 
			m_ActiveFlipbook->SetLooping(false); 
		}

		DeathPlaybackPositionInFrames = m_ActiveFlipbook->GetPlaybackPositionInFrames();
		DeathFlipbookLengthInFrames = m_ActiveFlipbook->GetFlipbookLengthInFrames();

		if (DeathPlaybackPositionInFrames == DeathFlipbookLengthInFrames)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, TEXT("Enemy slain."));
		}
	}
}

// Called to bind functionality to input
void ABeastPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABeastPawn::ApplyDamage(int32 damage)
{
	m_TotalHealth -= damage; 
	//GEngine->AddOnScreenDebugMessage()
}

UBoxComponent* ABeastPawn::GetBoxComponent()
{
	return m_BodyHitBox;
}


