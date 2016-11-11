// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "HorseAIController.generated.h"

/**
 * 
 */
UCLASS()
class HORSEBOARDING_API AHorseAIController : public AAIController
{
	GENERATED_BODY()

	// Adds a method of linking a Blackboard componant to the character
	UPROPERTY(transient)
	class UBlackboardComponent* BlackboardComp;

	// Adds a method of linking a BehaviorTree componant to the character
	UPROPERTY(transient)
		class UBehaviorTreeComponent* BehaviorTreeComp;

public:

	AHorseAIController();

	// Control specific characters
	virtual void Possess(APawn *InPawn) override;

	// Target id
	uint8 EnemyKeyID;



};
