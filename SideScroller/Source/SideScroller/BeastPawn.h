// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BeastPawn.generated.h"

UENUM()
enum class UBeastState : uint8
{
	Idle UMETA(DisplayName = "Idle"),
	Running UMETA(DisplayName = "Running"),
	Attacking UMETA(DisplayName = "Attacking"),
	Jumping UMETA(DisplayName = "Jumping"),
	Dead UMETA(DisplayName = "Dead"), 
};

UCLASS()
class SIDESCROLLER_API ABeastPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABeastPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void ApplyDamage(int32 damage);  

protected:
	UPROPERTY(EditAnywhere, Category = "Beast")
		class UBoxComponent* m_BodyHitBox; 

	UPROPERTY(EditAnywhere, Category = "Beast")
		class UPaperSpriteComponent* m_TestSprite; 

	UPROPERTY(EditAnywhere, Category = "Beast")
		class UPaperFlipbook* m_IdleFlipbook;

	UPROPERTY(EditAnywhere, Category = "Beast")
		class UPaperFlipbook* m_DeathFlipbook;

	UPROPERTY(EditAnywhere, Category = "Beast")
		class UPaperFlipbook* m_RunningFlipbook;

	UPROPERTY(EditAnywhere, Category = "Beast")
		class UPaperFlipbook* m_AttackingFlipbook;

	UPROPERTY(EditAnywhere, Category = "Beast")
		class UPaperFlipbookComponent* m_ActiveFlipbook; 

	UPROPERTY(EditAnywhere, Category = "Beast")
		int32 m_TotalHealth = 3;

	int32 DeathPlaybackPositionInFrames;
	int32 DeathFlipbookLengthInFrames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Beast")
		TEnumAsByte<UBeastState> m_CurrentState;

public:
	UBoxComponent* GetBoxComponent(); 
};
