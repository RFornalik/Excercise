// Fill out your copyright notice in the Description page of Project Settings.


#include "StillCameraPawn.h"
#include "Camera/CameraComponent.h"

// Sets default values
AStillCameraPawn::AStillCameraPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	camera = CreateDefaultSubobject<UCameraComponent>("camera");
}

// Called when the game starts or when spawned
void AStillCameraPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStillCameraPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AStillCameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

