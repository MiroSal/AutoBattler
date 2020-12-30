// Copyright © 2020 by Miro Salminen

#include "PlayerBase.h"
#include "Engine/World.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SoulTrialManager.h"
#include "CombatManager.h"
#include "AutoBattlerProtoGameModeBase.h"
#include "AutoBattlerProtoGameInstance.h"
#include "SlotBase.h"

APlayerBase::APlayerBase()
{
}

void APlayerBase::Initialize(ASlotBase* Slot, FCharacterAttributes InAttributes)
{
	Super::Initialize(Slot, InAttributes);

	check(IsValid(GetWorld()));

	UAutoBattlerProtoGameInstance* GameInstance = Cast<UAutoBattlerProtoGameInstance>(GetWorld()->GetGameInstance());
	check(IsValid(GameInstance));

	UCombatManager* combatManager = GameInstance->GetCombatManager();
	check(IsValid(combatManager));

	SetCurrentSlot(Slot);
	combatManager->RegisterToCombatListener(this);
	combatManager->SkillUsedDelegate.AddDynamic(this, &APlayerBase::SkillUsed);

	UpdateDataText();
}

//check if passive skill should be triggered
void APlayerBase::SkillUsed(ACharacterBase* InCharacter, const ESkillType InSkillType)
{
	if (GetHealth() > 0 && IsValid(GetPassiveSkill()))
	{
		if (InSkillType == GetPassiveSkillType())
		{
			check(IsValid(GetWorld()));
			UAutoBattlerProtoGameInstance* GameInstance = Cast<UAutoBattlerProtoGameInstance>(GetWorld()->GetGameInstance());
			check(IsValid(GameInstance));

			UCombatManager* CombatManager = GameInstance->GetCombatManager();
			check(IsValid(CombatManager));

			CombatManager->AddSkillActionToQueue(InCharacter);
		}
	}
}

void APlayerBase::ActivatePrimarySkill()
{
	if (IsValid(GetPrimarySkill()))
	{
		if (GetHealth() > 0)
		{
			GetPrimarySkill()->BP_ActivateSkill();
			BP_SkillUsed(GetPrimarySkill());
		}
		else
		{
			GetPrimarySkill()->DeactivateSkill();
		}
	}
}

void APlayerBase::ActivatePassiveSkill()
{
	if (IsValid(GetPassiveSkill()))
	{
		if (GetHealth() > 0)
		{
			GetPassiveSkill()->BP_ActivateSkill();
			BP_SkillUsed(GetPassiveSkill());
		}
		else
		{
			GetPassiveSkill()->DeactivateSkill();
		}
	}
}

void APlayerBase::Attack()
{
	check(IsValid(GetWorld()));

	UAutoBattlerProtoGameInstance* GameInstance = Cast<UAutoBattlerProtoGameInstance>(GetWorld()->GetGameInstance());
	check(IsValid(GameInstance));

	UCombatManager* CombatManager = GameInstance->GetCombatManager();
	check(IsValid(CombatManager));

	BP_Attack();
	TArray<ACharacterBase*> Enemies = CombatManager->GetCombatEnemyListeners();
	if (Enemies.Num() > 0)
	{
		ACharacterBase* Enemy = Enemies[FMath::RandRange(0, Enemies.Num() - 1)];
		if (IsValid(Enemy))
		{
			Enemy->AdjustHealth(-GetStr());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Attacked Non Valid enemy"));
		}
	}
}

//temp stat visualization
void APlayerBase::UpdateDataText()
{
	Super::UpdateDataText();
	if (IsValid(StatsText) && IsValid(GetPassiveSkill()) && IsValid(GetPrimarySkill()))
	{
		FString Stats = FString::Printf(TEXT("HP: %d\nSin: %d\nStr:%d"), GetHealth(), GetSin(), GetStr());
		StatsText->SetText(FText::FromString(Stats));
	}
}

void APlayerBase::OnDeath()
{
	check(IsValid(GetWorld()));

	UAutoBattlerProtoGameInstance* GameInstance = Cast<UAutoBattlerProtoGameInstance>(GetWorld()->GetGameInstance());
	check(IsValid(GameInstance));

	UCombatManager* combatManager = GameInstance->GetCombatManager();
	check(IsValid(combatManager));

	combatManager->UnRegisterCombatListener(this);
	combatManager->SkillUsedDelegate.RemoveDynamic(this, &APlayerBase::SkillUsed);
	Super::OnDeath();
}
