// Copyright (c) JLSA:

#include "TankTurret.h"

void UTankTurret::Rotate(float RelativeSpeed)
{
	// Rotate the turret the right amount this frame
	// Given a max rotation speed, and the frame time
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	auto RotationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto Rotation = RelativeRotation.Yaw + RotationChange;
	SetRelativeRotation(FRotator(0, Rotation, 0));
}