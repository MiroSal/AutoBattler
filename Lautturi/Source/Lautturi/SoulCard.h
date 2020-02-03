// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterBase.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Materials/Material.h"
#include "SoulCard.generated.h"

class ASoulSlot;

UCLASS()
class LAUTTURI_API ASoulCard : public ACharacterBase
{
	GENERATED_BODY()

private:

	UPROPERTY()
		USceneComponent* ObjRoot;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* SoulMesh;

	UPROPERTY(EditAnywhere)
		bool bHasCoin;
	
	UPROPERTY(EditAnywhere)
		bool bIsAlive;

	UPROPERTY(EditAnywhere)
		int32 Hp;

	UPROPERTY(EditAnywhere)
		int32 Sin;

		UPROPERTY(EditAnywhere)
		int32 Str;

		ASoulSlot* CurrentSlot;

		void RandomizeStats();


public:
	// Sets default values for this character's properties
	ASoulCard();

	//temp
	UPROPERTY(EditAnywhere)
		UMaterial* ActivatedColor;

	//temp
	UPROPERTY(EditAnywhere)
		UMaterial* DeactivatedColor;	//temp

	UPROPERTY(EditAnywhere)
		UMaterial* AliveColor;	//temp

	UPROPERTY(EditAnywhere)
		UMaterial* NoCoinColor;

	virtual bool Activate(AActor* ActorToDeactivate) override;
	virtual bool Deactivate() override;

	bool HasCoin();

	void Initialize(ASoulSlot* SoulSlot);

	int32 GetHp();
	int32 GetSin();
	int32 GetStr();

	ASoulSlot* GetCurrentSlot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
