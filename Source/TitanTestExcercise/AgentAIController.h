// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AgentAIController.generated.h"

/**
 * 
 */
UCLASS()
class TITANTESTEXCERCISE_API AAgentAIController : public AAIController
{
	GENERATED_BODY()
public:
	void MoveToBuilding(class ABuilding_Parent* building);
	virtual void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

protected:
	class ABuilding_Parent* buildingToMove;
};
