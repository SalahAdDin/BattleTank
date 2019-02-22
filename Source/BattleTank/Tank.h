// Copyright (c) JLSA:

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

// Forward declarations
class AProjectile;
class UTankBarrel;

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

public:
	// Called by the engine when actor damage is dealt
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const & DamageEvent, class AController * EventInstigator, AActor * DamageCauser) override;

	// Sets default values for this pawn's properties
	ATank();


private:
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		int32 StartingHealth = 100;

	UPROPERTY(EditDefaultsOnly, Category = "Health")
		int32 CurrentHealth = StartingHealth;
};
