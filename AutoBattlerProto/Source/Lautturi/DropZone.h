// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DropZoneInterface.h"
#include "PlayerCharacter.h"
#include "DropZone.generated.h"

USTRUCT(BlueprintType)
struct FFerrySoulSpot
{
	GENERATED_BODY()

public:
	FFerrySoulSpot(){ CharacterSpot = nullptr; Character = nullptr;}
	FFerrySoulSpot(UArrowComponent* Spot, APlayerCharacter* SoulToAdd){ CharacterSpot = Spot; Character = SoulToAdd;}

	UPROPERTY()
		class UArrowComponent* CharacterSpot;

	UPROPERTY()
		APlayerCharacter* Character;
};

UCLASS()
class AUTOBATTLERPROTO_API ADropZone : public AActor, public IDropZoneInterface
{
	GENERATED_BODY()

private:
	UPROPERTY()
	class USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere)
	class UArrowComponent* CharacterSpot1;
	UPROPERTY(VisibleAnywhere)
	class UArrowComponent* CharacterSpot2;
	UPROPERTY(VisibleAnywhere)
	class UArrowComponent* CharacterSpot3;
	UPROPERTY(VisibleAnywhere)
	class UArrowComponent* CharacterSpot4;
	UPROPERTY(VisibleAnywhere)
	class UArrowComponent* CharacterSpot5;

	UPROPERTY()
	TArray<FFerrySoulSpot> CharacterSpots;

protected:
	virtual void BeginPlay() override;

public:
	ADropZone();

//IDropZoneInterface
public:
	virtual bool CanDrop(AActor* ActorToDrop);
	virtual void Drop(AActor* ActorToDrop);
};