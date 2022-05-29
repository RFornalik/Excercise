// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AgentAction_Parent.h"
#include "Building_Parent.generated.h"

UCLASS()
class TITANTESTEXCERCISE_API ABuilding_Parent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilding_Parent();

	//Mesh To represent the building
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* mesh;

	//Location to Move, represented as component for modification ease
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* movementLocation;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Actions")
	TArray<TSubclassOf<UAgentAction_Parent>> actionsToPerform;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	TArray<UAgentAction_Parent*> actions;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void OnAgentCome(class AAgentCharacter* agent);

};
