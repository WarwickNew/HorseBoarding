// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "HorseCharacter.generated.h"

UCLASS()
class HORSEBOARDING_API AHorseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHorseCharacter();

	// Adds a method of linking a Blackboard componant to the character
	UPROPERTY(EditAnywhere, Category = Behavior)
		class UBlackboardComponent* BlackboardComp;

	// Adds a method of linking a BehaviorTree componant to the character
	UPROPERTY(EditAnywhere, Category = Behavior)
		class UBehaviorTree* BotBehavior;

	// Stores patrol targets that can be changed on an instance basis in editor
	UPROPERTY(EditAnywhere, Category = Behavior)
		TArray<ATargetPoint*> PatrolTargets;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	// Adds an array of targets to patrol through
	UFUNCTION(BlueprintPure, Category = Behavior)
		TArray<ATargetPoint*> getPatrolTargets();
	
};
