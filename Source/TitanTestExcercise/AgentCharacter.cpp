// Fill out your copyright notice in the Description page of Project Settings.


#include "AgentCharacter.h"
#include "Building_Parent.h"
#include "AgentAIController.h"

// Sets default values
AAgentCharacter::AAgentCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	staticMesh = CreateDefaultSubobject<UStaticMeshComponent>("mesh");
	//Mesh is just visual representation, shouldn't collide
	staticMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	staticMesh->SetupAttachment(GetRootComponent());
	//AI
	AIControllerClass = AAgentAIController::StaticClass();
}

// Called when the game starts or when spawned
void AAgentCharacter::BeginPlay()
{
	Super::BeginPlay();
	//Create material instance and assign it
	mat = UMaterialInstanceDynamic::Create(randomColorMaterial, this);
	staticMesh->SetMaterial(0, mat);
}

// Called every frame
void AAgentCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AAgentCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AAgentCharacter::MoveToBuilding(ABuilding_Parent* building)
{
	AAgentAIController* ai = Cast<AAgentAIController>(GetController());
	ai->MoveToBuilding(building);
}

