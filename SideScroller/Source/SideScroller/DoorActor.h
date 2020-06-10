// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DoorActor.generated.h"

UCLASS()
class SIDESCROLLER_API ADoorActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoorActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Door")
		class UPaperSpriteComponent* m_ActiveSprite; 

	UPROPERTY(EditAnywhere, Category = "Door")
		class UPaperSpriteComponent* m_ClosedDoorSprite;

	UPROPERTY(EditAnywhere, Category = "Door")
		class UPaperSpriteComponent* m_OpenDoorSprite;

	UPROPERTY(EditAnywhere, Category = "Door")
		class UBoxComponent* m_CollisionBox; 

	UPROPERTY(EditAnywhere, Category = "Door")
		UBoxComponent* m_TriggerBox; 

	UPROPERTY(EditInstanceOnly, Category = "Door")
		FString m_DoorTag;

	UPROPERTY(EditAnywhere, Category = "Door")
		class UAudioComponent* m_AudioComponent; 

	bool bIsLocked = true; 

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		virtual void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void SetIsLocked(bool IsLocked);

};
