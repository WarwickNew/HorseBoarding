// Fill out your copyright notice in the Description page of Project Settings.

#include "HorseBoarding.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "HorseCharacter.h"
#include "HorseAIController.h"


AHorseAIController::AHorseAIController()
{
	// Create blank Blackboard and Behavior Tree
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));

	BehaviorTreeComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComp"));
}

void AHorseAIController::Possess(APawn *InPawn)
{
	// Apply this Ai to Enemy characters only
	Super::Possess(InPawn);

	AHorseCharacter *Character = Cast<AHorseCharacter>(InPawn);

	if (Character && Character->BotBehavior)
	{
		// Initialize blackboard and behavior tree
		BlackboardComp->InitializeBlackboard(*Character->BotBehavior->BlackboardAsset);

		EnemyKeyID = BlackboardComp->GetKeyID("Target");

		BehaviorTreeComp->StartTree(*Character->BotBehavior);
	}
}


