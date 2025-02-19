// Copyright © 2020 by Miro Salminen

#include "SkillBase.h"
#include "CharacterBase.h"
#include "Engine/World.h"
#include "AutoBattlerProtoGameModeBase.h"
#include "AutoBattlerProtoGameInstance.h"
#include "SoulTrialManager.h"
#include "CombatManager.h"

USkillBase::USkillBase()
{
	SkillType = ESkillType::ST_None;
	AffectRange = EAffectRange::AR_None;
	SkillTypeToActivate = ESkillType::ST_None;
	SkillInfo = TEXT("");

	OwningCharacter = nullptr;
	GameInstance = nullptr;
	TrialManager = nullptr;
	CombatManager = nullptr;
}

void USkillBase::Initialize(ACharacterBase* Character)
{
	OwningCharacter = Character;

	check(IsValid(GetWorld()));

	GameInstance = Cast<UAutoBattlerProtoGameInstance>(GetWorld()->GetGameInstance());
	check(IsValid(GameInstance));

	TrialManager = GameInstance->GetSoulTrialManager();
	check(IsValid(TrialManager));

	CombatManager = GameInstance->GetCombatManager();
	check(IsValid(CombatManager));
}

void USkillBase::Activate(float Delay)
{
	BP_ActivateSkill(Delay);
}

void USkillBase::DeactivateSkill()
{

	if (ensure(IsValid(CombatManager)))
		CombatManager->PopNextSkillFromQueue();
}

TArray<class ACharacterBase*> USkillBase::GetCombatPlayerListeners()
{
	if (ensure(IsValid(CombatManager)))
	{
		return CombatManager->GetCombatPlayerListeners();
	}
	return TArray<class ACharacterBase*>();
}

TArray<class ACharacterBase*> USkillBase::GetCombatEnemyListeners()
{
	if (ensure(IsValid(CombatManager)))
	{
		return CombatManager->GetCombatEnemyListeners();
	}
	return TArray<class ACharacterBase*>();
}