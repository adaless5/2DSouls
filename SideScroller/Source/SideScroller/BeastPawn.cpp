// Fill out your copyright notice in the Description page of Project Settings.


#include "BeastPawn.h"
#include "Components/BoxComponent.h"
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

	m_ActiveFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("ActiveFlipbook")); 
	m_ActiveFlipbook->SetCollisionEnabled(ECollisionEnabled::NoCollision); 
	m_ActiveFlipbook->SetCollisionProfileName(TEXT("NoCollision")); 

	m_IdleFlipbook = CreateDefaultSubobject<UPaperFlipbook>(TEXT("IdleAnimation")); 
	m_DeathFlipbook = CreateDefaultSubobject<UPaperFlipbook>(TEXT("DeathAnimation")); 
}

// Called when the game starts or when spawned
void ABeastPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABeastPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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


