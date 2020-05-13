// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EnemyPawn.generated.h"

//TODO: Remember in EnemyState running refers to chasing the playing. Change that to reflect the actual state of the enemy.
UENUM()
enum UEnemyState
{
	Enemy_Idle UMETA(DisplayName = "Idle"),
	Enemy_Running UMETA(DisplayName = "Running"),
	Enemy_Patrolling UMETA(DisplayName = "Patrolling"),
	Enemy_Attacking UMETA(DisplayName = "Attacking"),
	Enemy_Jumping UMETA(DisplayName = "Jumping"),
	Enemy_Dead UMETA(DisplayName = "Dead"),
	Enemy_Wait UMETA(DisplayName = "Waiting"),
};

UCLASS()
class SIDESCROLLER_API AEnemyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEnemyPawn();

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
		void SetEnemyState(UEnemyState newState);

	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	void Attack(); 
	void StartPatrol();
	void FindNextPatrolPoint(); 

	void SpawnExperience(); 

protected:
	UPROPERTY(EditAnywhere, Category = "Enemy")
		class UBoxComponent* m_BodyHitBox;

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

	int32 AttackPlaybackPositionInFrames; 
	int32 AttackFlipbookLengthInFrames; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
		TEnumAsByte<UEnemyState> m_CurrentState;

	UPROPERTY(VisibleAnywhere, Category = "Enemy")
		class AMyPawn* m_Player = nullptr; 

	UPROPERTY(EditAnywhere, Category = "Enemy")
		float m_MovementSpeed = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Enemy")
		float m_AggroDistance = 200.0f; 

	UPROPERTY(EditAnywhere, Category = "Enemy")
		float m_AttackDistance = 60.0f; 

	UPROPERTY(EditAnywhere, Category = "Enemy")
		float m_AttackForce = 30000.0f;

	FTimerHandle m_StartPatrolTimerHandle; 

	UPROPERTY(EditAnywhere, Category = "Enemy")
	float m_StartPatrolTimerRate = 4.0f; 

	FTimerHandle m_AttackTimerHandle; 

	UPROPERTY(EditAnywhere, Category = "Enemy")
	float m_AttackTimerRate = 0.7f; 

	FTimerHandle m_WaitTimerHandle;

	UPROPERTY(EditAnywhere, Category = "Enemy")
	float m_WaitTimerRate = 2.0f;

	FVector Velocity = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, Category = "Enemy")
	TArray<AActor*> m_PatrolPoints;

	int m_PatrolPointIndex = 0; 

	bool bDealDamageEnabled = false;

	UPROPERTY(EditDefaultsOnly, Category = "EXP")
		TSubclassOf<class AEXPActor> EXPTemplate; 

	UPROPERTY(EditAnywhere, Category = "EXP")
		uint32 m_ExperienceValue = 0; 

	UPROPERTY(EditAnywhere, Category = "EXP")
		int m_NumberOfExperience = 3;

	int m_ExperienceSpawnedCounter = 0; 

	//int m_NumberOfExperience = 3; 

	FTimerHandle m_SpawnExperienceTimer; 

	float m_SpawnExperienceTimerRate = 0.1f; 

public:
	UBoxComponent* GetBoxComponent();
};
