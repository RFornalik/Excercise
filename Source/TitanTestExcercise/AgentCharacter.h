// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AgentCharacter.generated.h"

UCLASS()
class TITANTESTEXCERCISE_API AAgentCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAgentCharacter();
	//Mesh To represent the Agent
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* staticMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USoundWave* soundToPlay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterialInterface* randomColorMaterial;

	//Material Instance for Color Change
	UMaterialInstanceDynamic* mat;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void MoveToBuilding(class ABuilding_Parent* building);

};
