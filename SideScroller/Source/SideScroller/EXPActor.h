// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EXPActor.generated.h"

UCLASS()
class SIDESCROLLER_API AEXPActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEXPActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	UPROPERTY(EditDefaultsOnly, Category = "EXP")
		class UStaticMeshComponent* m_MeshComponent; 

	UPROPERTY(EditDefaultsOnly, Category = "EXP")
		class USphereComponent* m_CollisionComponent; 

	UPROPERTY(EditDefaultsOnly, Category = "EXP")
		class UMaterialInterface* m_EXPMaterial;

	UPROPERTY(EditAnywhere, Category = "EXP")
		uint32 m_ExperienceValue;

	UPROPERTY(EditAnywhere, Category = "EXP")
		float m_FollowDistance = 30.0f; 

	class AMyPawn* m_Player = nullptr;

public:
	USphereComponent* GetSphereComponent(); 
	void SetExperienceValue(uint32 value); 
	uint32 GetExperienceValue();
};
