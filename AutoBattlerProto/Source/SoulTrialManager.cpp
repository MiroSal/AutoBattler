// Copyright © 2020 by Miro Salminen

#include "SoulTrialManager.h"
#include "AutoBattlerProtoGameModeBase.h"
#include "AutoBattlerProtoGameInstance.h"
#include "PlayerCharacter.h"
#include "Widgets\CharacterDataWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "Widgets\TrialHUDWidget.h"
#include "Engine/World.h"

USoulTrialManager::USoulTrialManager()
{
	SelectedCharacterAttributes = TArray<FCharacterAttributes>();
	ConstructorHelpers::FClassFinder<UUserWidget> TrialHUDBPClass(TEXT("/Game/TestingContent/Widgets/WBP_TrialHUD"));
	if (!ensure(TrialHUDBPClass.Class != nullptr)) return;
	TrialHUDWidgetClass = TrialHUDBPClass.Class;
}

void USoulTrialManager::Initialize()
{
	check(IsValid(GetWorld()));

	TrialHUDWidget = CreateWidget<UTrialHUDWidget>(GetWorld()->GetGameInstance(), TrialHUDWidgetClass);
	check(IsValid(TrialHUDWidget));
	TrialHUDWidget->AddToViewport();
}

FCharacterAttributes USoulTrialManager::GetRandomizedCharacterAttributes()
{
	FCharacterAttributes RandomizeAttributes = FCharacterAttributes();
	RandomizeAttributes.RandomizeAttributes(AllPossiblePrimarySkills, AllPossiblePassiveSkills);
	return RandomizeAttributes;
}

void USoulTrialManager::SetActiveCharacterWidget(UCharacterDataWidget * Widget)
{
	if (IsValid(Widget))
	{
		if (Widget->GetAttributes().TrialStatus == ETrialStatus::TS_NoCoin)
		{
			if (IsValid(ActiveCharacterWidget) && ActiveCharacterWidget != Widget)
			{
				ActiveCharacterWidget->RemoveFromParent();
				GetTrialHUDWidget()->CreateCharacterDataWidgetToTrial();
				Widget->RemoveFromParent();
				GetTrialHUDWidget()->CreateCharacterDataWidgetToTrial();
				ActiveCharacterWidget = nullptr;
			}
			else
			{
				ActiveCharacterWidget = Widget;
			}
		}
	}
	else
	{
		ActiveCharacterWidget = nullptr;
	}
}

FCharacterAttributes USoulTrialManager::GetSelectedCharacterAttributes()
{
	if (SelectedCharacterAttributes.Num() > 0)
	{
		return SelectedCharacterAttributes.Pop();
	}
	return FCharacterAttributes();
}