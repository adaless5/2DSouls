// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorActor.h"
#include "Components/BoxComponent.h"
#include "PaperSpriteComponent.h"
#include "MyPawn.h"
#include "SideScroller/SideScrollerGameModeBase.h"
#include "Components/AudioComponent.h"

// Sets default values
ADoorActor::ADoorActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox")); 
	m_CollisionBox->SetCollisionProfileName(TEXT("BlockAllDynamic")); 
	m_CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics); 
	m_CollisionBox->SetNotifyRigidBodyCollision(true); 
	RootComponent = m_CollisionBox; 

	m_TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox")); 
	m_TriggerBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly); 
	m_TriggerBox->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	m_TriggerBox->SetGenerateOverlapEvents(true); 
	m_TriggerBox->SetupAttachment(RootComponent); 
	m_TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ADoorActor::OnOverlapBegin); 
	m_TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ADoorActor::OnOverlapEnd); 

	m_ActiveSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("ActiveSprite")); 
	m_ActiveSprite->SetupAttachment(RootComponent); 
	m_ActiveSprite->SetCollisionEnabled(ECollisionEnabled::NoCollision); 
	m_ActiveSprite->SetCollisionProfileName(TEXT("NoCollision")); 

	m_ClosedDoorSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("ClosedDoorSprite"));
	m_OpenDoorSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("OpenDoorSprite"));

	m_AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent")); 
}

// Called when the game starts or when spawned
void ADoorActor::BeginPlay()
{
	Super::BeginPlay();
	
	m_ActiveSprite = m_ClosedDoorSprite; 
	m_AudioComponent->Stop(); 
}

// Called every frame
void ADoorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoorActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (AMyPawn* PlayerPawn = Cast<AMyPawn>(OtherActor))
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("Stepped near door.")); 
		PlayerPawn->SetIsNearDoor(true); 
		PlayerPawn->SetDoorInProximity(this); 

		UWorld* World = GetWorld(); 

		if (World)
		{
			ASideScrollerGameModeBase* GameMode = Cast<ASideScrollerGameModeBase>(World->GetAuthGameMode());

			if (GameMode)
			{
				GameMode->DisplayInteract(true);
			}
		}
	}
}

void ADoorActor::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (AMyPawn* PlayerPawn = Cast<AMyPawn>(OtherActor))
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("Stepped away from door."));
		PlayerPawn->SetIsNearDoor(false); 
		PlayerPawn->SetDoorInProximity(nullptr); 

		UWorld* World = GetWorld();

		if (World)
		{
			ASideScrollerGameModeBase* GameMode = Cast<ASideScrollerGameModeBase>(World->GetAuthGameMode());

			if (GameMode)
			{
				GameMode->DisplayInteract(false);
			}
		}
	}
}

void ADoorActor::SetIsLocked(bool IsLocked)
{
	bIsLocked = IsLocked; 

	if (bIsLocked)
	{

	}
	else if (!bIsLocked)
	{
		SetActorEnableCollision(false); 
		SetActorHiddenInGame(true); 
		m_AudioComponent->Play(); 
	}
}

