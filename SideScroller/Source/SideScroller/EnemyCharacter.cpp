// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "Components/BoxComponent.h"
#include "PaperSpriteComponent.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AEnemyCharacter::AEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*m_BodyHitBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BodyHitBox"));
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
	RootComponent = m_BodyHitBox;*/

	/*GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	GetCapsuleComponent()->SetNotifyRigidBodyCollision(true); 
	GetCapsuleComponent()->SetGenerateOverlapEvents(true); 
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	GetCapsuleComponent()->SetSimulatePhysics(true);
	GetCapsuleComponent()->SetEnableGravity(true);
	GetCapsuleComponent()->BodyInstance.bLockXRotation = true;
	GetCapsuleComponent()->BodyInstance.bLockYRotation = true;
	GetCapsuleComponent()->BodyInstance.bLockZRotation = true;*/
	GetCapsuleComponent()->ComponentTags.Add(TEXT("Enemy"));

	m_ActiveFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("ActiveFlipbook"));
	m_ActiveFlipbook->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	m_ActiveFlipbook->SetCollisionProfileName(TEXT("NoCollision"));
	m_ActiveFlipbook->SetupAttachment(RootComponent);

	m_IdleFlipbook = CreateDefaultSubobject<UPaperFlipbook>(TEXT("IdleAnimation"));
	m_DeathFlipbook = CreateDefaultSubobject<UPaperFlipbook>(TEXT("DeathAnimation"));
	m_RunningFlipbook = CreateDefaultSubobject<UPaperFlipbook>(TEXT("RunningAnimation"));
	m_AttackingFlipbook = CreateDefaultSubobject<UPaperFlipbook>(TEXT("AttackingAnimation"));

}

// Called when the game starts or when spawned
void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	m_CurrentState = EnemyCharacter_Idle; 
	m_ActiveFlipbook->SetFlipbook(m_IdleFlipbook);
}

// Called every frame
void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*switch (m_CurrentState) {
	case Enemy_Running:
		m_ActiveFlipbook->SetFlipbook(m_RunningFlipbook);

	case Enemy_Idle: 
		m_ActiveFlipbook->SetFlipbook(m_IdleFlipbook); 

	}*/

	if (m_TotalHealth <= 0)
	{
		//m_ActiveFlipbook->SetFlipbook(m_DeathFlipbook); 
		if (m_CurrentState != EnemyCharacter_Dead)
		{
			m_CurrentState = EnemyCharacter_Dead;
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
void AEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemyCharacter::ApplyDamage(int32 damage)
{
	m_TotalHealth -= damage;
}

//UBoxComponent* AEnemyCharacter::GetBoxComponent()
//{
//	return m_BodyHitBox;
//}

void AEnemyCharacter::SetEnemyState(UEnemyCharacterState newState)
{
	m_CurrentState = newState; 

	switch (m_CurrentState)
	{
	case EnemyCharacter_Idle:
		m_ActiveFlipbook->SetFlipbook(m_IdleFlipbook); 
		break;
	case  EnemyCharacter_Running:
		m_ActiveFlipbook->SetFlipbook(m_RunningFlipbook); 
	}
}

