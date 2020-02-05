// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ActivationInterface.h"
#include "CharacterBase.generated.h"

UCLASS()
class LAUTTURI_API ACharacterBase : public AActor, public IActivationInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterBase();

	virtual bool Clicked(AActor* ActorToDeactivate) override;
	virtual bool DoubleClicked() override;
	virtual bool Deactivate() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
