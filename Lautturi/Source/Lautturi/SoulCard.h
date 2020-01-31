// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterBase.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Materials/Material.h"
#include "SoulCard.generated.h"

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



public:
	// Sets default values for this character's properties
	ASoulCard();


	UPROPERTY(EditAnywhere)
		UMaterial* ActivatedColor;

	UPROPERTY(EditAnywhere)
		UMaterial* DeactivatedColor;

	virtual bool Activate(AActor* ActorToDeactivate) override;
	virtual bool Deactivate() override;

	bool HasCoin();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
