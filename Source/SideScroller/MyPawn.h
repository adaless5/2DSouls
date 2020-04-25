// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

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

	UFUNCTION()
		virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit); 

protected: 

	UPROPERTY(EditAnywhere, Category = "Player")
		class UPaperSpriteComponent* m_Sprite; 


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
		class USpringArmComponent* m_SpringArm; 

	UPROPERTY(EditAnywhere, Category = "Player")
		class UCameraComponent* m_Camera; 

	FVector m_CurrentVelocity; 
	FVector m_LastVelocity; 

	int32 PlaybackPositionInFrames; 
	int32 FlipbookLengthInFrames; 

	bool bIsAttacking = false; 
	bool bIsMoving; 
	bool bCanJump = false;
	bool bIsJumping;
	bool bIsRolling = false;
	bool bCanRoll = true; 
	bool bIsBlocking = false;
};
