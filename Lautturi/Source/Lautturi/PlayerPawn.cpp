// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "GameFramework/Pawn.h"
#include "ActivationInterface.h"
#include "DrawDebugHelpers.h"


// Sets default values
APlayerPawn::APlayerPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();

	World = GetWorld();
	if (!IsValid(World))
	{
		UE_LOG(LogTemp, Error, TEXT("World is not valid!!"));
	}

	Controller = Cast<AMouseController>(World->GetFirstPlayerController());
	if (!IsValid(Controller))
	{
		UE_LOG(LogTemp, Error, TEXT("PlayerController is not valid!!"));
	}
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("LeftButtonPressed", IE_Pressed, this, &APlayerPawn::LeftMouseButtonPressed);
	PlayerInputComponent->BindAction("LeftButtonPressed", IE_DoubleClick, this, &APlayerPawn::LeftMouseButtonDoubleClicked);

}

void APlayerPawn::LeftMouseButtonPressed()
{
	if (IsValid(World))
	{
		if (IsValid(Controller))
		{
			//LineTrace to check if hit Actor in level
			FVector Start;
			FVector Direction;
			Controller->GetMousePosition(Start.X, Start.Y);
			Controller->DeprojectMousePositionToWorld(Start, Direction);
			FVector End = Start + Direction * 2000;

			FHitResult Hit;
			FCollisionQueryParams Params;
			World->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params);
			if (IsValid(Hit.GetActor()))
			{
				//If linetrace hits actor check if it has interface that can activate Actor.
				AActor* LastActiveActor = ActorToActivate;
				ActorToActivate = Hit.GetActor();
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
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Controller is not valid!!"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("World is not valid!!"));
	}
}

void APlayerPawn::LeftMouseButtonDoubleClicked()
{
	if (IsValid(World))
	{
		if (IsValid(Controller))
		{
			//LineTrace to check if hit Actor in level
			FVector Start;
			FVector Direction;
			Controller->GetMousePosition(Start.X, Start.Y);
			Controller->DeprojectMousePositionToWorld(Start, Direction);
			FVector End = Start + Direction * 2000;

			FHitResult Hit;
			FCollisionQueryParams Params;
			World->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params);
			if (IsValid(Hit.GetActor()))
			{
				//If linetrace hits actor check if it has interface that can activate Actor.
				AActor* LastActiveActor = ActorToActivate;
				ActorToActivate = Hit.GetActor();
				IActivationInterface* ActivationInterface = Cast<IActivationInterface>(ActorToActivate);
				if (ActivationInterface)
				{
					ActivationInterface->DoubleClicked();
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
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Controller is not valid!!"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("World is not valid!!"));
	}
}

