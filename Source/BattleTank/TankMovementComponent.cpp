// Copyright (c) JLSA:

#include "TankMovementComponent.h"

void UTankMovementComponent::IntentMoveForward(float Throw)
{

	//auto Time = GetWorld()->GetTimeSeconds();
	auto Name = GetName();
	UE_LOG(LogTemp, Warning, TEXT("Intent move forward throw: %f"), Throw);

}