// Fill out your copyright notice in the Description page of Project Settings.


#include "Building_Parent.h"
#include "AgentAction_Parent.h"
#include "AgentCharacter.h"

// Sets default values
ABuilding_Parent::ABuilding_Parent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>("mesh");
	mesh->SetupAttachment(GetRootComponent());


	movementLocation = CreateDefaultSubobject<USceneComponent>("movementLocation");
	movementLocation->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void ABuilding_Parent::BeginPlay()
{
	Super::BeginPlay();

	//Initialize Actions
	for (int32 i = 0; i < actionsToPerform.Num(); i++)
	{
		actions.Add(NewObject<UAgentAction_Parent>(this, actionsToPerform[i].Get()));
	}
	
}

// Called every frame
void ABuilding_Parent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABuilding_Parent::OnAgentCome(AAgentCharacter* agent)
{
	//Iterate over actions and do them
	for(int32 i = 0; i<actions.Num();i++)
	{
		actions[i]->SetAgent(agent);
		actions[i]->PerformAction();
	}
}


