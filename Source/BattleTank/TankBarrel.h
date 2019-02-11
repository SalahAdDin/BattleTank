// Copyright (c) JLSA:

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

 // Holds barrel's properties and Elevate method
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	// -1 is max downward speed, and +1 is max up movement
	void Elevate(float RelativeSpeed);

private:
	UPROPERTY(EditAnywhere, Category = Setup)
		float MaxDegreesPerSecond = 5.f;

	UPROPERTY(EditAnywhere, Category = Setup)
		float MinElevationDegrees = 0.f;

	UPROPERTY(EditAnywhere, Category = Setup)
		float MaxElevationDegrees = 45.f;
	
};
