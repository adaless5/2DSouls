// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "SideScrollerGameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "MyPawn.h"

void ASideScrollerGameModeBase::BeginPlay()
{
	Super::BeginPlay(); 
}

void ASideScrollerGameModeBase::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
	if (m_CurrentWidget != nullptr)
	{
		m_CurrentWidget->RemoveFromViewport(); 
		m_CurrentWidget = nullptr; 
	}

	if (NewWidgetClass != nullptr)
	{
		m_CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), NewWidgetClass); 

		if (m_CurrentWidget != nullptr)
		{
			m_CurrentWidget->AddToViewport(); 
		}
	}
}

int ASideScrollerGameModeBase::GetHealthIncreaseCost()
{
	if (AMyPawn* pPlayerPawn = Cast<AMyPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0)))
	{
		m_HealthIncreaseCost = pPlayerPawn->GetMaxHealth() * 100;
	}
	return m_HealthIncreaseCost; 
}

int ASideScrollerGameModeBase::GetStaminaIncreaseCost()
{
	if (AMyPawn* pPlayerPawn = Cast<AMyPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0)))
	{
		m_StaminaIncreaseCost = pPlayerPawn->GetMaxStamina() * 100;
	}
	return m_StaminaIncreaseCost; 
}

int ASideScrollerGameModeBase::GetMagicIncreaseCost()
{
	return m_MagicIncreaseCost; 
}

void ASideScrollerGameModeBase::DisplayInteract(bool bShouldDisplay)
{
	bDisplayInteract = bShouldDisplay; 
}

bool ASideScrollerGameModeBase::GetDisplayInteract()
{
	return bDisplayInteract;
}
