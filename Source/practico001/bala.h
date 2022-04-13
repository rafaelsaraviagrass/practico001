// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "bala.generated.h"

UCLASS()
class PRACTICO001_API Abala : public AActor
{
	GENERATED_BODY()
private:
	float dano;
	float velocidad;
	float Ubicacionx;
	float Ubicaciony;
public:	
	// Sets default values for this actor's properties
	Abala();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
