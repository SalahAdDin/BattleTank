// Copyright (c) JLSA:

#include "TankAIController.h"
#include "Tank.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());

	if (PlayerTank)
	{
		// Aims towards the player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());

		ControlledTank->Fire(); // TODO: Don't fire every tick
	}
}
