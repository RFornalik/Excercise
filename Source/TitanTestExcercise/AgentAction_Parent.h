// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AgentAction_Parent.generated.h"

/**
Action That the Building will generate once Agent approaches it
 */
UCLASS()
class TITANTESTEXCERCISE_API UAgentAction_Parent : public UObject
{
	GENERATED_BODY()
public:
	void SetAgent(class AAgentCharacter* _agent);
	virtual void PerformAction();

protected:
	class AAgentCharacter* agent;
};
