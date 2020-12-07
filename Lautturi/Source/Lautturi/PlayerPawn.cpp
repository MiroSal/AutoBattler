// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerPawn.h"
#include "GameFramework/Pawn.h"
#include "ActivationInterface.h"
#include "DropZoneInterface.h"
#include "DrawDebugHelpers.h"
#include "BaseSlot.h"
#include "CharacterBase.h"
#include "Engine/World.h"
#include "Components/InputComponent.h"
#include "GameFramework/PlayerController.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bDragged = false;
}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	Controller = Cast<APlayerController>(GetWorld()->GetFirstPlayerController());
	check(IsValid(Controller))
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bDragged)
	{
		DragTimer = DragTimer + DeltaTime;
		//TODO remove magic number
		if (DragTimer > 0.25f)
		{
			//LineTrace to check if linetrace is hitting Actor in level
			FVector Start;
			FVector Direction;
			Controller->GetMousePosition(Start.X, Start.Y);
			Controller->DeprojectMousePositionToWorld(Start, Direction);
			FVector End = Start + Direction * 2000;

			TArray<FHitResult> Hits;
			FCollisionQueryParams Params;
			GetWorld()->LineTraceMultiByChannel(Hits, Start, End, ECC_GameTraceChannel1, Params);

			for (int32 i = 0; i < Hits.Num(); i++)
			{
				DropZoneInterface = Cast<IDropZoneInterface>(Hits[i].GetActor());
				if (DropZoneInterface)
				{
					DropZoneInterface->ActorCanBeDropped(DraggedActor);
					return;
				}
			}

			//TODO why LineTracing used only to set location??
			FHitResult Hit;
			GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_GameTraceChannel2, Params);

			if (IsValid(Hit.GetActor()))
			{
				DraggedActor->SetActorLocation(FVector(Hit.Location.X, Hit.Location.Y, -50));
			}
		}
	}
}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("LeftButtonPressed", IE_Pressed, this, &APlayerPawn::LeftMouseButtonPressed);
	PlayerInputComponent->BindAction("LeftButtonPressed", IE_Released, this, &APlayerPawn::LeftMouseButtonReleased);
	PlayerInputComponent->BindAction("LeftButtonPressed", IE_DoubleClick, this, &APlayerPawn::LeftMouseButtonDoubleClicked);
}

void APlayerPawn::LeftMouseButtonPressed()
{
	if (IsValid(Controller) && !IsValid(DraggedActor))
	{
		//TODO same code as above, merge in to 1 function
		//LineTrace to check if hit Actor in level
		FVector Start;
		FVector Direction;
		Controller->GetMousePosition(Start.X, Start.Y);
		Controller->DeprojectMousePositionToWorld(Start, Direction);
		FVector End = Start + Direction * 2000;

		FHitResult Hit;
		FCollisionQueryParams Params;
		GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_GameTraceChannel2, Params);
		if (IsValid(Hit.GetActor()))
		{
			DraggedActor = Hit.GetActor();
			bDragged = true;
			DragTimer = 0.f;
			LastActiveActor = ActorToActivate;
			ActorToActivate = Hit.GetActor();
		}
		else
		{
			IActivationInterface* ActivationInterface = Cast<IActivationInterface>(ActorToActivate);
			if (ActivationInterface)
			{
				ActivationInterface->Deactivate();
			}
		}
	}
}

void APlayerPawn::LeftMouseButtonReleased()
{
	if (DragTimer > 0.25f && bDragged)
	{
		if (DropZoneInterface && DropZoneInterface->ActorCanBeDropped(DraggedActor))
		{
			DropZoneInterface->ActorDrop(DraggedActor);
		}
		else
		{
			IActivationInterface* ActivationInterface = Cast<IActivationInterface>(DraggedActor);

			if (ActivationInterface)
			{
				ABaseSlot* Slot = ActivationInterface->GetSlot();
				DraggedActor->SetActorLocation(Slot->GetActorLocation());

			}
		}

		DropZoneInterface = nullptr;
		DraggedActor = nullptr;
		bDragged = false;
		DragTimer = 0.f;
	}
	else
	{
		if (IsValid(ActorToActivate))
		{
			DraggedActor = nullptr;
			bDragged = false;
			DragTimer = 0.f;
			IActivationInterface* ActivationInterface = Cast<IActivationInterface>(ActorToActivate);

			if (ActivationInterface)
			{
				ActivationInterface->Clicked(LastActiveActor);
			}
			else
			{
				ActivationInterface = Cast<IActivationInterface>(LastActiveActor);
				if (ActivationInterface)
				{
					ActivationInterface->Deactivate();
				}
			}
		}
		else
		{
			IActivationInterface* ActivationInterface = Cast<IActivationInterface>(ActorToActivate);
			if (ActivationInterface)
			{
				ActivationInterface->Deactivate();
			}
		}
	}
}

void APlayerPawn::LeftMouseButtonDoubleClicked()
{
	if (IsValid(Controller))
	{
		//TODO remove dublicated code and make function from linetracing
		//LineTrace to check if hit Actor in level
		FVector Start;
		FVector Direction;
		Controller->GetMousePosition(Start.X, Start.Y);
		Controller->DeprojectMousePositionToWorld(Start, Direction);
		FVector End = Start + Direction * 2000;

		FHitResult Hit;
		FCollisionQueryParams Params;
		GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params);
		if (IsValid(Hit.GetActor()))
		{
			//If linetrace hits actor check if it has interface that can activate Actor.
			LastActiveActor = ActorToActivate;
			ActorToActivate = Hit.GetActor();
			IActivationInterface* ActivationInterface = Cast<IActivationInterface>(ActorToActivate);
			if (ActivationInterface)
			{
				ActivationInterface->DoubleClicked(LastActiveActor);
			}
			else
			{
				ActivationInterface = Cast<IActivationInterface>(LastActiveActor);
				if (ActivationInterface)
				{
					ActivationInterface->Deactivate();
				}
			}
		}
		else
		{
			IActivationInterface* ActivationInterface = Cast<IActivationInterface>(ActorToActivate);
			if (ActivationInterface)
			{
				ActivationInterface->Deactivate();
			}
		}
	}
}
