// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseSlot.h"
#include "SoulSlot.generated.h"


class ASoulCard;

UCLASS()
class LAUTTURI_API ASoulSlot : public ABaseSlot
{
	GENERATED_BODY()

private:

	//UPROPERTY(EditAnywhere)
		//bool bCreatedSoulCanBeClicked = true;

public:	
	// Sets default values for this actor's properties
	ASoulSlot();
	virtual void CreateNewCharacteToSlot() override;

	virtual void RemoveCharacterFromSlot(bool bDestroyCharacter) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
