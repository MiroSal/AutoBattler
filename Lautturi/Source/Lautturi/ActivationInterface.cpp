// Fill out your copyright notice in the Description page of Project Settings.

#include "ActivationInterface.h"

// Add default functionality here for any IActivation functions that are not pure virtual.
bool IActivationInterface::Clicked(AActor* ActorToDeactivate)
{
	UE_LOG(LogTemp, Warning, TEXT("Override IActivationInterface::Clicked(AActor* ActorToDeactivate) function!"));
	return true;
}

bool IActivationInterface::DoubleClicked(AActor* ActorToDeactivate)
{
	UE_LOG(LogTemp, Warning, TEXT("Override IActivationInterface::DoubleClicked() function!"));
	return true;
}

bool IActivationInterface::Deactivate()
{
	UE_LOG(LogTemp, Warning, TEXT("Override IActivationInterface::Deactivate() function!"))
	return true;
}

ABaseSlot * IActivationInterface::GetSlot()
{
	UE_LOG(LogTemp, Warning, TEXT("Override IActivationInterface::GetSlot() function!"));
	return nullptr;
}
