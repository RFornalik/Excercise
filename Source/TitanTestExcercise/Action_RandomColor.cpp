// Fill out your copyright notice in the Description page of Project Settings.


#include "Action_RandomColor.h"
#include "AgentCharacter.h"
void UAction_RandomColor::PerformAction()
{
	agent->mat->SetVectorParameterValue("color", FLinearColor::MakeRandomColor());
}
