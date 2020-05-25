// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include "MyPawn.h"

void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay(); 

	SetInputMode(FInputModeGameAndUI()); 
}

void AMainPlayerController::OnPossess(APawn* pPawn)
{
	Super::OnPossess(pPawn); 
}

void AMainPlayerController::OnUnPossess()
{
	APawn* possessedPawn = Cast<APawn>(GetOwner());

	Super::OnUnPossess(); 
}

void AMainPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent(); 

	if (InputComponent != nullptr)
	{
		InputComponent->BindAxis("MoveX", this, &AMainPlayerController::Move_X_Axis);
		InputComponent->BindAxis("MoveY", this, &AMainPlayerController::Move_Y_Axis);

		InputComponent->BindAction("Attack", IE_Pressed, this, &AMainPlayerController::Attack);
		InputComponent->BindAction("Attack", IE_Released, this, &AMainPlayerController::StopAttacking);
		InputComponent->BindAction("Jump", IE_Pressed, this, &AMainPlayerController::Jump);

		InputComponent->BindAction("Shield", IE_Pressed, this, &AMainPlayerController::Shield);
		InputComponent->BindAction("Shield", IE_Released, this, &AMainPlayerController::ShieldRelease);

		InputComponent->BindAction("Roll", IE_Pressed, this, &AMainPlayerController::Roll);

		InputComponent->BindAction("Interact", IE_Pressed, this, &AMainPlayerController::Interact);

		InputComponent->BindAction("Pause", IE_Pressed, this, &AMainPlayerController::PauseGame);
	}
}

void AMainPlayerController::Move_X_Axis(float value)
{
	AMyPawn* pPawn = Cast<AMyPawn>(GetPawn()); 
	if (pPawn != nullptr)
	{
		pPawn->Move_X_Axis(value); 
	}
}

void AMainPlayerController::Move_Y_Axis(float value)
{
	AMyPawn* pPawn = Cast<AMyPawn>(GetPawn());
	if (pPawn != nullptr)
	{
		pPawn->Move_Y_Axis(value);
	}
}

void AMainPlayerController::Attack()
{
	AMyPawn* pPawn = Cast<AMyPawn>(GetPawn());
	if (pPawn != nullptr)
	{
		pPawn->Attack(); 
	}
}

void AMainPlayerController::StopAttacking()
{
	AMyPawn* pPawn = Cast<AMyPawn>(GetPawn());
	if (pPawn != nullptr)
	{
		pPawn->StopAttacking(); 
	}
}

void AMainPlayerController::Jump()
{
	AMyPawn* pPawn = Cast<AMyPawn>(GetPawn());
	if (pPawn != nullptr)
	{
		pPawn->Jump(); 
	}
}

void AMainPlayerController::Roll()
{
	AMyPawn* pPawn = Cast<AMyPawn>(GetPawn());
	if (pPawn != nullptr)
	{
		pPawn->Roll(); 
	}
}

void AMainPlayerController::Shield()
{
	AMyPawn* pPawn = Cast<AMyPawn>(GetPawn());
	if (pPawn != nullptr)
	{
		pPawn->Shield(); 
	}
}

void AMainPlayerController::ShieldRelease()
{
	AMyPawn* pPawn = Cast<AMyPawn>(GetPawn());
	if (pPawn != nullptr)
	{
		pPawn->ShieldRelease(); 
	}
}

void AMainPlayerController::Interact()
{
	AMyPawn* pPawn = Cast<AMyPawn>(GetPawn());
	if (pPawn != nullptr)
	{
		if (pPawn->GetIsNearBonfire())
		{
			pPawn->InteractWithBonfire(); 
		}
		if (pPawn->GetIsNearDoor())
		{
			pPawn->InteractWithDoor(); 
		}
	}
}

void AMainPlayerController::PauseGame()
{
	AMyPawn* pPawn = Cast<AMyPawn>(GetPawn());
	if (pPawn != nullptr)
	{
		pPawn->PauseGame(); 
	}
}
