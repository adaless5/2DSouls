// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHUD.h"
#include "Blueprint/UserWidget.h"

void APlayerHUD::DrawHUD()
{

}

void APlayerHUD::BeginPlay()
{
	Super::BeginPlay(); 

	if (m_StatsWidgetClass)
	{
		m_CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), m_StatsWidgetClass); 

		if (m_CurrentWidget)
		{
			m_CurrentWidget->AddToViewport(); 
		}
	}
}