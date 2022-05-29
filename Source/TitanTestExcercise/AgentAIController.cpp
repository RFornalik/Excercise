// Fill out your copyright notice in the Description page of Project Settings.


#include "AgentAIController.h"
#include "Building_Parent.h"
#include "AgentCharacter.h"

void AAgentAIController::MoveToBuilding(ABuilding_Parent* building)
{
	buildingToMove = building;
	MoveToLocation(buildingToMove->movementLocation->GetComponentLocation());
}
void AAgentAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	if(Result.IsSuccess())
	{
		//Informs the building that the player has come and is ready to perform actions
		AAgentCharacter* ownedAgent = Cast<AAgentCharacter>(GetPawn());
		buildingToMove->OnAgentCome(ownedAgent);
	}
}