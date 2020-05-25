// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KeyActor.generated.h"

UCLASS()
class SIDESCROLLER_API AKeyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKeyActor();

	UPROPERTY(EditAnywhere, Category = "Key")
		class UPaperSpriteComponent* m_SpriteComponent; 

	UPROPERTY(EditAnywhere, Category = "Key")
		class UBoxComponent* m_CollisionBox;

	UPROPERTY(EditInstanceOnly, Category = "Key")
		FString m_KeyTag; 

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};
