// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "asteroide.generated.h"

UCLASS()
class PRACTICO001_API Aasteroide : public AActor
{
	GENERATED_BODY()
private:
	float dano;
	float Ubicacionx;
	float Ubicaciony;
	float resistencia;
public:	
	// Sets default values for this actor's properties
	Aasteroide();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
