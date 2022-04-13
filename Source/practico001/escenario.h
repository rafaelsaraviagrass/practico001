// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "escenario.generated.h"

UCLASS()
class PRACTICO001_API Aescenario : public AActor
{
	GENERATED_BODY()
private:
	float tamano;

public:	
	// Sets default values for this actor's properties
	Aescenario();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
