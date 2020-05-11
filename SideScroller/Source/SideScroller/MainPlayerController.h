// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API AMainPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override; 
	void OnPossess(APawn* pPawn) override; 
	void OnUnPossess() override; 

protected:
	void SetupInputComponent() override; 

	void Move_X_Axis(float value); 
	void Move_Y_Axis(float value); 
	void Attack(); 
	void StopAttacking(); 
	void Jump(); 
	void Roll(); 
	void Shield(); 
	void ShieldRelease(); 
	void Interact(); 
	void PauseGame(); 

};
