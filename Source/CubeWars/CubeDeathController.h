// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Controller.h"
#include "DeathStarActorComponent.h"
#include "CubeDeathController.generated.h"

/**
 * 
 */
UCLASS()
class CUBEWARS_API ACubeDeathController : public AController
{
	GENERATED_BODY()
	
public:
	ACubeDeathController();

	UPROPERTY(EditDefaultsOnly)
	float targetHeight;

	UPROPERTY(EditDefaultsOnly)
	float breakTime;

	UPROPERTY(EditDefaultsOnly)
	float explosionForce;

	void actorReachedHeight();

	virtual void TickActor(float DeltaTime, enum ELevelTick TickType, FActorTickFunction& ThisTickFunction) override;

	virtual void PostInitializeComponents() override;

	virtual void Possess(APawn* InPawn);

private:
	float breakTimer;
	bool waiting;
	class APlayerCube* playerCube;
};