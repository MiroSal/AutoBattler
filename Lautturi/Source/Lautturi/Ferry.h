// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SoulCard.h"
#include "DropZoneInterface.h"
#include "Ferry.generated.h"

class USceneComponent;
class UStaticMeshComponent;
class USoulTrialManager;
class ALautturiGameModeBase;
class UArrowComponent;

USTRUCT(BlueprintType)
struct FFerrySoulSpot
{
	GENERATED_BODY()

public:

	FFerrySoulSpot()
	{
		SoulSpot = nullptr;
		Soul = nullptr;
	}

	FFerrySoulSpot(UArrowComponent* Spot, ASoulCard* SoulToAdd)
	{
		SoulSpot = Spot;
		Soul = SoulToAdd;
	}

	UPROPERTY()
		UArrowComponent* SoulSpot;

	UPROPERTY()
		ASoulCard* Soul;
};


UCLASS()
class LAUTTURI_API AFerry : public AActor, public IDropZoneInterface
{
	GENERATED_BODY()

private:

	UPROPERTY()
		USceneComponent* ObjRoot;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* FerryMesh;

	UPROPERTY()
		USoulTrialManager* SoulTrialManager;

	UPROPERTY()
		ALautturiGameModeBase* GameMode;

	UPROPERTY(VisibleAnywhere)
		UArrowComponent* SoulSpot1;
	UPROPERTY(VisibleAnywhere)
		UArrowComponent* SoulSpot2;
	UPROPERTY(VisibleAnywhere)
		UArrowComponent* SoulSpot3;
	UPROPERTY(VisibleAnywhere)
		UArrowComponent* SoulSpot4;
	UPROPERTY(VisibleAnywhere)
		UArrowComponent* SoulSpot5;

	TArray<FFerrySoulSpot> SoulSpots;

	UFUNCTION()
		void AddSoulToFerry(ASoulCard* Soul);

	virtual bool ActorCanBeDropped(AActor* ActorToDrop);

	virtual void ActorDrop(AActor* ActorToDrop);

public:
	// Sets default values for this actor's properties
	AFerry();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
