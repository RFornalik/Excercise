// Fill out your copyright notice in the Description page of Project Settings.


#include "AgentAction_Parent.h"
#include "AgentCharacter.h"

void UAgentAction_Parent::SetAgent(class AAgentCharacter* _agent)
{
	agent = _agent;
}
void UAgentAction_Parent::PerformAction()
{
	//Action Implementation
}