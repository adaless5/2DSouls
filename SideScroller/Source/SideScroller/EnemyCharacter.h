// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyCharacter.generated.h"

UENUM()
enum UEnemyCharacterState 
{
	EnemyCharacter_Idle UMETA(DisplayName = "Idle"),
	EnemyCharacter_Running UMETA(DisplayName = "Running"),
	EnemyCharacter_Attacking UMETA(DisplayName = "Attacking"),
	EnemyCharacter_Jumping UMETA(DisplayName = "Jumping"),
	EnemyCharacter_Dead UMETA(DisplayName = "Dead"),
};

UCLASS()
class SIDESCROLLER_API AEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void ApplyDamage(int32 damage);

	UFUNCTION(BlueprintCallable)
		void SetEnemyState(UEnemyCharacterState newState); 

protected:

	UPROPERTY(EditAnywhere, Category = "Enemy")
		class UPaperFlipbook* m_IdleFlipbook;

	UPROPERTY(EditAnywhere, Category = "Enemy")
		class UPaperFlipbook* m_DeathFlipbook;

	UPROPERTY(EditAnywhere, Category = "Enemy")
		class UPaperFlipbook* m_RunningFlipbook;

	UPROPERTY(EditAnywhere, Category = "Enemy")
		class UPaperFlipbook* m_AttackingFlipbook;

	UPROPERTY(EditAnywhere, Category = "Enemy")
		class UPaperFlipbookComponent* m_ActiveFlipbook;

	UPROPERTY(EditAnywhere, Category = "Enemy")
		int32 m_TotalHealth = 3;

	int32 DeathPlaybackPositionInFrames;
	int32 DeathFlipbookLengthInFrames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
		TEnumAsByte<UEnemyCharacterState> m_CurrentState;

public:
	//UBoxComponent* GetBoxComponent();
};
