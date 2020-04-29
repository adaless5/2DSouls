// Fill out your copyright notice in the Description page of Project Settings.


#include "Bonfire.h"
#include "Components/PointLightComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/Engine.h"
#include "SideScroller/MyPawn.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"

// Sets default values
ABonfire::ABonfire()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_TriggerSphere = CreateDefaultSubobject<USphereComponent>(TEXT("TriggerSphere")); 
	m_TriggerSphere->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics); 
	m_TriggerSphere->SetCollisionProfileName("OverlapAll"); 
	m_TriggerSphere->SetGenerateOverlapEvents(true);
	RootComponent = m_TriggerSphere; 
	m_TriggerSphere->OnComponentBeginOverlap.AddDynamic(this, &ABonfire::OnOverlapBegin);
	m_TriggerSphere->OnComponentEndOverlap.AddDynamic(this, &ABonfire::OnOverlapEnd); 

	m_PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
	m_PointLight->SetSourceRadius(100.0f); 
	m_PointLight->SetSourceLength(100.0f); 
	m_PointLight->SetLightBrightness(100.0f); 
	m_PointLight->SetLightFalloffExponent(2.0f); 
	m_PointLight->SetupAttachment(RootComponent); 

	m_ActiveFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("ActiveFlipbook")); 
	m_ActiveFlipbook->SetupAttachment(RootComponent); 

	m_FireAnim = CreateDefaultSubobject<UPaperFlipbook>(TEXT("FireAnimation")); 
}

// Called when the game starts or when spawned
void ABonfire::BeginPlay()
{
	Super::BeginPlay();

	m_ActiveFlipbook->SetFlipbook(m_FireAnim); 
	
}

// Called every frame
void ABonfire::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABonfire::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ( OtherActor != nullptr )
	{
		if ( AMyPawn* PlayerPawn = Cast<AMyPawn>(OtherActor) )
		{
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Player entered bonfire sphere.")); 
			PlayerPawn->SetIsNearBonfire(true); 
		}
	}
}

void ABonfire::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor != nullptr)
	{
		if (AMyPawn* PlayerPawn = Cast<AMyPawn>(OtherActor))
		{
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Player exited bonfire sphere."));
			PlayerPawn->SetIsNearBonfire(false); 
		}
	}
}

