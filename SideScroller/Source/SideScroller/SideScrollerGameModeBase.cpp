// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "SideScrollerGameModeBase.h"
#include "Blueprint/UserWidget.h"

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
