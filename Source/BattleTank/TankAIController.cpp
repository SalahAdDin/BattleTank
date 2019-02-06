// Copyright (c) JLSA:

#include "TankAIController.h"
#include "Runtime/Engine/Classes/Engine/World.h"

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}



void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController possessing: %s"), *(ControlledTank->GetName()));
	}
}
