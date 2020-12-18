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
	SelectedAttributes = TArray<FCharacterAttributes>();
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

void USoulTrialManager::AddSelectedAttributes(FCharacterAttributes CharacterAttributes)
{
	SelectedAttributes.Add(CharacterAttributes);
}

FCharacterAttributes USoulTrialManager::GetRandomizedCharacterAttributes()
{
	FCharacterAttributes RandomAttributes = FCharacterAttributes();
	RandomAttributes.RandomAttributes(AllPossiblePrimarySkills, AllPossiblePassiveSkills);
	return RandomAttributes;
}

void USoulTrialManager::SetCurrentCharacterWidget(UCharacterDataWidget * Widget)
{

	if (Widget->GetAttributes().TrialStatus == ETrialStatus::TS_NoCoin)
	{
		if (IsValid(CurrentCharacterWidget) && CurrentCharacterWidget != Widget)
		{
			CurrentCharacterWidget->RemoveFromParent();
			GetTrialHUDWidget()->CreateCharacterDataWidget();
			Widget->RemoveFromParent();
			GetTrialHUDWidget()->CreateCharacterDataWidget();
			CurrentCharacterWidget = nullptr;
		}
		else
		{
			CurrentCharacterWidget = Widget;
		}
	}
}

FCharacterAttributes USoulTrialManager::GetChosenCharacterAttributes()
{
	if (SelectedAttributes.Num() > 0)
	{
		return SelectedAttributes.Pop();
	}
	return FCharacterAttributes();
}