// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyActor.h"
#include "Components/BoxComponent.h"
#include "PaperSpriteComponent.h"
#include "MyPawn.h"

// Sets default values
AKeyActor::AKeyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox")); 
	m_CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics); 
	m_CollisionBox->SetCollisionProfileName(TEXT("BlockAllDynamic")); 
	m_CollisionBox->SetNotifyRigidBodyCollision(true); 
	m_CollisionBox->OnComponentHit.AddDynamic(this, &AKeyActor::OnHit);
	RootComponent = m_CollisionBox; 

	m_SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("SpriteComponent")); 
	m_SpriteComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision); 
	m_SpriteComponent->SetCollisionProfileName(TEXT("NoCollision"));
	m_SpriteComponent->SetupAttachment(RootComponent); 
}

// Called when the game starts or when spawned
void AKeyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKeyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AKeyActor::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (AMyPawn* PlayerPawn = Cast<AMyPawn>(OtherActor))
	{
		PlayerPawn->m_CollectedKeys.Add(this); 
		SetActorHiddenInGame(true); 
		SetActorEnableCollision(false); 
		//Destroy(); 
	}
}

