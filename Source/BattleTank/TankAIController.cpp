// Copyright (c) JLSA:

#include "TankAIController.h"
#include "TankAimingComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"

// Depends on movement component via pathfinding system

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	auto ControlledTank = GetPawn();

	if (!ensure(PlayerTank && ControlledTank)) return;

	// Moves towars the player
	MoveToActor(PlayerTank, AcceptanceRadius);
	// Aims towards the player
	auto AimingComponent = ControlledTank->FindComponentByClass<UTankAimingComponent>();
	AimingComponent->AimAt(PlayerTank->GetActorLocation());

	AimingComponent->Fire(); // TODO limit firing rate
}
