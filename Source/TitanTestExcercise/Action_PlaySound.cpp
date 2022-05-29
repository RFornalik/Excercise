// Fill out your copyright notice in the Description page of Project Settings.


#include "Action_PlaySound.h"
#include "Kismet/GameplayStatics.h"
#include "AgentCharacter.h"

void UAction_PlaySound::PerformAction()
{
	UGameplayStatics::PlaySoundAtLocation(agent, agent->soundToPlay, agent->GetActorLocation());
}