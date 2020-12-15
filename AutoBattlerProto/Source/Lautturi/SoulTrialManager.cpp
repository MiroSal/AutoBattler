// Copyright © 2020 by Miro Salminen

#include "SoulTrialManager.h"
#include "AutoBattlerProtoGameModeBase.h"
#include "AutoBattlerProtoGameInstance.h"
#include "PlayerCharacter.h"

#define COMBATPOSITIONS  5

USoulTrialManager::USoulTrialManager()
{
	AllCharactersInTrial = TArray<APlayerCharacter*>();
	CharactersToCombat = TArray<APlayerCharacter*>();
}

void USoulTrialManager::AddCharacterToCombat(APlayerCharacter* Character)
{
	if (CharactersToCombat.Num() <= COMBATPOSITIONS)
	{
		CharactersToCombat.Add(Character);

		if (CharactersToCombat.Num() >= COMBATPOSITIONS)
		{
			FerryIsFullDelegate.Broadcast(false);
		}

		if (SoulAddedToJourneyDelegate.IsBound())
		{
			SoulAddedToJourneyDelegate.Broadcast(Character);
		}
	}
}

void USoulTrialManager::AddCharacterToTrial(ACharacterBase * Character)
{
	if (IsValid(Character))
	{
		AllCharactersInTrial.Add(Cast<APlayerCharacter>(Character));
	}
}

void USoulTrialManager::RemoveCharacterFromTrial(ACharacterBase * Character)
{
	if (IsValid(Character))
	{
		AllCharactersInTrial.Remove(Cast<APlayerCharacter>(Character));
	}
}

void USoulTrialManager::DestroyCharactersFromTrial()
{
	for (APlayerCharacter* Character : AllCharactersInTrial)
	{
		if (IsValid(Character))
		{
			Character->Destroy();
		}
	}
}

APlayerCharacter * USoulTrialManager::GetChosenCharacter()
{
	APlayerCharacter* CharacterToSend = nullptr;

	for (APlayerCharacter* Character : CharactersToCombat)
	{
		if (IsValid(Character))
		{
			CharacterToSend = Character;
			break;
		}
	}

	if (IsValid(CharacterToSend))
	{
		CharactersToCombat.Remove(CharacterToSend);
		return CharacterToSend;
	}

	return nullptr;
}
