// Fill out your copyright notice in the Description page of Project Settings.


#include "EXPActor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "MyPawn.h"

// Sets default values
AEXPActor::AEXPActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent")); 
	m_CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics); 
	m_CollisionComponent->SetCollisionProfileName("BlockAllDynamic"); 
	m_CollisionComponent->SetNotifyRigidBodyCollision(true); 
	m_CollisionComponent->SetSimulatePhysics(true); 
	m_CollisionComponent->SetEnableGravity(true); 
	m_CollisionComponent->SetLinearDamping(10.0f); 
	m_CollisionComponent->ComponentTags.Add(TEXT("Experience")); 
	RootComponent = m_CollisionComponent; 

	m_MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent")); 
	m_MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision); 
	m_MeshComponent->SetCollisionProfileName("NoCollision");
	m_MeshComponent->SetupAttachment(RootComponent); 

	m_EXPMaterial = CreateDefaultSubobject<UMaterialInterface>(TEXT("EXPMaterial")); 

}

// Called when the game starts or when spawned
void AEXPActor::BeginPlay()
{
	Super::BeginPlay();

	m_MeshComponent->SetMaterial(0, m_EXPMaterial);
	m_Player = Cast<AMyPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0)); 
}

// Called every frame
void AEXPActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector TargetLoc = m_Player->GetActorLocation(); 
	FVector CurrentLoc = GetActorLocation(); 
	float DistanceFromTarget = FVector::Dist(TargetLoc, CurrentLoc);

	if (DistanceFromTarget <= m_FollowDistance)
	{
		FVector lerpPosition = FMath::Lerp(CurrentLoc, TargetLoc, 0.075f); 
		SetActorLocation(lerpPosition); 
	}
}

USphereComponent* AEXPActor::GetSphereComponent()
{
	return m_CollisionComponent; 
}

void AEXPActor::SetExperienceValue(uint32 value)
{
	m_ExperienceValue = value; 
}

uint32 AEXPActor::GetExperienceValue()
{
	return m_ExperienceValue;
}

