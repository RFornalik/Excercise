// Fill out your copyright notice in the Description page of Project Settings.


#include "Action_Jump.h"
#include "AgentCharacter.h"

void UAction_Jump::PerformAction()
{
	agent->Jump();
}