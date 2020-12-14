// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DropZoneInterface.h"
#include "PlayerCharacter.h"
#include "Ferry.generated.h"

USTRUCT(BlueprintType)
struct FFerrySoulSpot
{
	GENERATED_BODY()

public:

	FFerrySoulSpot(){SoulSpot = nullptr; Soul = nullptr;}
	FFerrySoulSpot(UArrowComponent* Spot, APlayerCharacter* SoulToAdd){SoulSpot = Spot; Soul = SoulToAdd;}

	UPROPERTY()
		class UArrowComponent* SoulSpot;

	UPROPERTY()
		APlayerCharacter* Soul;
};

UCLASS()
class AUTOBATTLERPROTO_API AFerry : public AActor, public IDropZoneInterface
{
	GENERATED_BODY()

private:

	UPROPERTY()
		class USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* FerryMesh;

	UPROPERTY(VisibleAnywhere)
		class UArrowComponent* SoulSpot1;
	UPROPERTY(VisibleAnywhere)
		class UArrowComponent* SoulSpot2;
	UPROPERTY(VisibleAnywhere)
		class UArrowComponent* SoulSpot3;
	UPROPERTY(VisibleAnywhere)
		class UArrowComponent* SoulSpot4;
	UPROPERTY(VisibleAnywhere)
		class UArrowComponent* SoulSpot5;

	TArray<FFerrySoulSpot> SoulSpots;

	virtual bool ActorCanBeDropped(AActor* ActorToDrop);

	virtual void ActorDrop(AActor* ActorToDrop);

protected:

	virtual void BeginPlay() override;


public:
	AFerry();

};
