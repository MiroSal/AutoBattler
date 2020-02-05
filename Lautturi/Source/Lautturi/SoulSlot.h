// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "SoulCard.h"
#include "SoulSlot.generated.h"

class USoulTrialManager;
class ALautturiGameModeBase;
class ASoulCard;

UCLASS()
class LAUTTURI_API ASoulSlot : public AActor
{
	GENERATED_BODY()

private:

	UPROPERTY()
	USceneComponent* ObjRoot;

	UPROPERTY()
	UArrowComponent* ArrowComponent;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ASoulCard> SoulCardToSpawn;

	ASoulCard* SoulInSlot;

	UPROPERTY()
		USoulTrialManager* SoulTrialManager;

	UPROPERTY()
		ALautturiGameModeBase* GameMode;

public:	
	// Sets default values for this actor's properties
	ASoulSlot();

	void CreateNewSoulToSlot();

	void RemoveSoulFromSlot(bool bDestroySoul);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
