// Copyright © 2020 by Miro Salminen

#include "SoulTrialManager.h"
#include "AutoBattlerProtoGameModeBase.h"
#include "AutoBattlerProtoGameInstance.h"
#include "PlayerBase.h"
#include "Widgets\CharacterDataWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "Widgets\TrialHUDWidget.h"
#include "Engine/World.h"

USoulTrialManager::USoulTrialManager()
{
	SelectedCharacterAttributes = TArray<FCharacterAttributes>();
	ConstructorHelpers::FClassFinder<UUserWidget> TrialHUDBPClass(TEXT("/Game/Content/Widgets/WBP_TrialHUD"));
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

//Create randomized character
FCharacterAttributes USoulTrialManager::GetRandomizedCharacterAttributes()
{
	FCharacterAttributes RandomizeAttributes = FCharacterAttributes();
	RandomizeAttributes.RandomizeAttributes(AllPossiblePrimarySkillClasses, AllPossiblePassiveSkillClasses);
	return RandomizeAttributes;
}

//Characterwidget can be removed in pairs if status is No_Coin
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

//Called from combatmanager when game starts
FCharacterAttributes USoulTrialManager::GetSelectedCharacterAttributes()
{
	if (SelectedCharacterAttributes.Num() > 0)
	{
		return SelectedCharacterAttributes.Pop();
	}
	return FCharacterAttributes();
}