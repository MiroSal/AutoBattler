// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SlotBase.h"
#include "Widgets\CharacterDataWidget.h"
#include "ActivationInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UActivationInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class AUTOBATTLERPROTO_API IActivationInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual bool Clicked(UCharacterDataWidget* CharacterWidgetToDeactivate) = 0;
	virtual bool DoubleClicked(UCharacterDataWidget* CharacterWidgetToDeactivate)=0;
	virtual bool Deactivate()=0;
};
