// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "LionelI.generated.h"

UCLASS()
class SMALLWORLD_API ALionelI : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALionelI();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
