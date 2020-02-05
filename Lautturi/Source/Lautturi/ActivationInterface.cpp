// Fill out your copyright notice in the Description page of Project Settings.

#include "ActivationInterface.h"

// Add default functionality here for any IActivation functions that are not pure virtual.
bool IActivationInterface::Clicked(AActor* ActorToDeactivate)
{
	UE_LOG(LogTemp, Warning, TEXT("Override this function!"));
	return true;
}

bool IActivationInterface::DoubleClicked()
{
	UE_LOG(LogTemp, Warning, TEXT("Override this function!"));
	return true;
}

bool IActivationInterface::Deactivate()
{
	UE_LOG(LogTemp, Warning, TEXT("Override this function!"))
	return true;
}