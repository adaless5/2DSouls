// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UENUM()
enum class UPlayerState
{
	Idle UMETA(DisplayName = "Idle"),
	Running UMETA(DisplayName = "Running"),
	Attacking UMETA(DisplayName = "Attacking"),
	Jumping UMETA(DisplayName = "Jumping"),
	Rolling UMETA(DisplayName = "Rolling"),
	Shielding UMETA(DisplayName = "Shielding")
};

UCLASS()
class SIDESCROLLER_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Move_X_Axis(float value); 
	virtual void Move_Y_Axis(float value); 

	virtual void Attack(); 
	virtual void StopAttacking(); 

	virtual void Jump(); 

	virtual void Roll(); 

	virtual void Shield(); 
	virtual void ShieldRelease(); 

	virtual void InteractWithBonfire(); 

	virtual UPlayerState GetPlayerState(); 

	UFUNCTION()
		virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
		virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		virtual void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	virtual void SetIsNearBonfire(bool isNear); 

protected: 

	UPROPERTY(EditAnywhere, Category = "Player")
		class UPaperFlipbookComponent* m_ActiveFlipBook;

	UPROPERTY(EditAnywhere, Category = "Player")
		class UPaperFlipbook* m_Run; 
	UPROPERTY(EditAnywhere, Category = "Player")
		class UPaperFlipbook* m_Idle;
	UPROPERTY(EditAnywhere, Category = "Player")
		class UPaperFlipbook* m_Attack;
	UPROPERTY(EditAnywhere, Category = "Player")
		class UPaperFlipbook* m_Roll;
	UPROPERTY(EditAnywhere, Category = "Player")
		class UPaperFlipbook* m_Shield;
	UPROPERTY(EditAnywhere, Category = "Player")
		class UPaperFlipbook* m_Jump; 

	UPROPERTY(EditAnywhere, Category = "Player")
		class UBoxComponent* m_Box; 

	UPROPERTY(EditAnywhere, Category = "Player")
		UBoxComponent* m_AttackHitBox; 

	UPROPERTY(EditAnywhere, Category = "Player")
		class USpringArmComponent* m_SpringArm; 

	UPROPERTY(EditAnywhere, Category = "Player")
		class UCameraComponent* m_Camera; 

	UPROPERTY(EditAnywhere, Category = "PlayerMobility")
		FVector m_JumpValue = FVector(10.0f, 0.0f, 10000.0f);

	UPROPERTY(EditAnywhere, Category = "PlayerMobility")
		float m_RollValue = 75.0f;

	UPROPERTY(EditAnywhere, Category = "PlayerMobility")
		float m_AttackStepValue = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
		TEnumAsByte<UPlayerState> m_PlayerState; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerState")
		TEnumAsByte<UPlayerState> m_LastPlayerState;

	FVector m_CurrentVelocity; 
	FVector m_LastVelocity; 

	int32 RollPlaybackPositionInFrames; 
	int32 RollFlipbookLengthInFrames; 
	int32 AttackPlaybackPositionInFrames;
	int32 AttackFlipbookLengthInFrames;

	bool bIsNearBonfire = false;
	bool bIsInMenu = false;
	bool bSwordDamageActive = true;
	bool bIsOverlappingEnemy = false;

	class ABeastPawn* m_RecentBeast = nullptr; 
};
