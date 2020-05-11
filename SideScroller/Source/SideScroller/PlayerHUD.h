// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PlayerHUD.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API APlayerHUD : public AHUD
{
	GENERATED_BODY()

public:		

	virtual void DrawHUD() override; 

	virtual void BeginPlay() override; 

protected:

	UPROPERTY(EditAnywhere, Category = "Stats")
		TSubclassOf<class UUserWidget> m_StatsWidgetClass; 

	UPROPERTY(EditAnywhere, Category = "Stats")
		UUserWidget* m_CurrentWidget;
	
};
