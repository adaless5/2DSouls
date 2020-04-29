// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bonfire.generated.h"

UCLASS()
class SIDESCROLLER_API ABonfire : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABonfire();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

protected:

	UPROPERTY(EditAnywhere, Category = "Bonfire")
		class USphereComponent* m_TriggerSphere;

	UPROPERTY(EditAnywhere, Category = "Bonfire")
		class UPaperFlipbookComponent* m_ActiveFlipbook; 

	UPROPERTY(EditAnywhere, Category = "Bonfire")
		class UPaperFlipbook* m_FireAnim;

	UPROPERTY(EditAnywhere, Category = "Bonfire")
		class UPointLightComponent* m_PointLight; 
};
