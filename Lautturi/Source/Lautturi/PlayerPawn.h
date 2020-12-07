// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DropZoneInterface.h"
#include "PlayerPawn.generated.h"

UCLASS()
class LAUTTURI_API APlayerPawn : public APawn
{
	GENERATED_BODY()

private:
	APlayerController* Controller;
	AActor* ActorToActivate;
	AActor* LastActiveActor;

	bool bDragged;
	AActor* DraggedActor;
	float DragTimer;

	IDropZoneInterface* DropZoneInterface;

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void LeftMouseButtonPressed();
	void LeftMouseButtonReleased();
	void LeftMouseButtonDoubleClicked();

};
