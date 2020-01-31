// Fill out your copyright notice in the Description page of Project Settings.

#include "ActivationInterface.h"

// Add default functionality here for any IActivation functions that are not pure virtual.
bool IActivationInterface::Activate(AActor* ActorToDeactivate)
{
	return true;
}

bool IActivationInterface::Deactivate()
{
	return true;
}