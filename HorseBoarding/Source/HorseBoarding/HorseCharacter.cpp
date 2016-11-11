// Fill out your copyright notice in the Description page of Project Settings.

#include "HorseBoarding.h"
#include "HorseCharacter.h"


// Sets default values
AHorseCharacter::AHorseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHorseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHorseCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AHorseCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

// retrieves patrol points for blueprints
TArray<ATargetPoint*> AHorseCharacter::getPatrolTargets()
{
	return PatrolTargets;

}