// Copyright © 2020 by Miro Salminen

#include "PlayerCharacter.h"
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

APlayerCharacter::APlayerCharacter()
{
}

void APlayerCharacter::Initialize(ASlotBase* Slot, FCharacterAttributes InAttributes)
{
	Super::Initialize(Slot, InAttributes);

	check(IsValid(GetWorld()));

	UAutoBattlerProtoGameInstance* GameInstance = Cast<UAutoBattlerProtoGameInstance>(GetWorld()->GetGameInstance());
	check(IsValid(GameInstance));

	UCombatManager* combatManager = GameInstance->GetCombatManager();
	check(IsValid(combatManager));

	SetCurrentSlot(Slot);
	combatManager->RegisterToCombatListener(this);
	combatManager->SkillUsedDelegate.AddDynamic(this, &APlayerCharacter::SkillUsed);

	UpdateDataText();
}

//check if passive skill should be triggered
void APlayerCharacter::SkillUsed(ACharacterBase* InCharacter, const ESkillType InSkillType)
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

void APlayerCharacter::ActivatePrimarySkill()
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

void APlayerCharacter::ActivatePassiveSkill()
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

void APlayerCharacter::Attack()
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
void APlayerCharacter::UpdateDataText()
{
	Super::UpdateDataText();
	if (IsValid(StatsText) && IsValid(GetPassiveSkill()) && IsValid(GetPrimarySkill()))
	{
		FString Stats = FString::Printf(TEXT("HP: %d\nSin: %d\nStr:%d\nPrimary:\n %s\n Passive:\n %s"), GetHealth(), GetSin(), GetStr(), *GetPrimarySkill()->GetSkillInfo(), *GetPassiveSkill()->GetSkillInfo());
		StatsText->SetText(FText::FromString(Stats));
	}
}

void APlayerCharacter::OnDeath()
{
	check(IsValid(GetWorld()));

	UAutoBattlerProtoGameInstance* GameInstance = Cast<UAutoBattlerProtoGameInstance>(GetWorld()->GetGameInstance());
	check(IsValid(GameInstance));

	UCombatManager* combatManager = GameInstance->GetCombatManager();
	check(IsValid(combatManager));

	combatManager->UnRegisterCombatListener(this);
	combatManager->SkillUsedDelegate.RemoveDynamic(this, &APlayerCharacter::SkillUsed);
	Super::OnDeath();
}
