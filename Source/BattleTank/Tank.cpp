// Copyright (c) JLSA:

#include "Tank.h"

// Sets default values
ATank::ATank()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ATank::AimAt(FVector HitLocation)
{
	auto OurTankName = GetName();
	// UE_LOG(LogTemp, Warning, TEXT("Look direction: %s"), *HitLocation.ToString());
	UE_LOG(LogTemp, Warning, TEXT("%s aim at: %s"), *OurTankName, *HitLocation.ToString());
}

// Called when the game starts or when spawned
void ATank::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

