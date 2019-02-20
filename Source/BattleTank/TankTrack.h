// Copyright (c) JLSA:

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * TankTrack is used to set maximum driving force, and to apply forces to the tank.
 */
UCLASS(ClassGroup = (Tank), meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()

private:
	UTankTrack();

	void ApplySidewaysForce();

	virtual void BeginPlay() override;

	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

public:

	UFUNCTION(BlueprintCallable, Category = "Input")
		void SetThrottle(float Throttle);

	void DriveTrack();

	// Max force per tracks, in Newtons
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		float TrackMaxDrivingForce = 45000000; // Assume 45 tonne tank, and 1g accelleration

	float CurrentThrottle = 0;
};
