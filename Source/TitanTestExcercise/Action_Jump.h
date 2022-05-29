// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AgentAction_Parent.h"
#include "Action_Jump.generated.h"

/**
Simple Jump Action
 */
UCLASS()
class TITANTESTEXCERCISE_API UAction_Jump : public UAgentAction_Parent
{
	GENERATED_BODY()
public:
	virtual void PerformAction() override;
	
};
