// Copyright © 2020 by Miro Salminen

#include "EnemyBase.h"
#include "SlotBase.h"
#include "Components/TextRenderComponent.h"
#include "SkillBase.h"
#include "AutoBattlerProtoGameModeBase.h"
#include "AutoBattlerProtoGameInstance.h"
#include "SoulTrialManager.h"
#include "CombatManager.h"

AEnemyBase::AEnemyBase()
{
	EnemyCount = 1;
	EnemyCountText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("EnemyCountText"));
	if (EnemyCountText)
	{
		EnemyCountText->SetupAttachment(GetRootComponent());
	}
}

void AEnemyBase::Initialize(ASlotBase * Slot, FCharacterAttributes InAttributes)
{
	Super::Initialize(Slot, InAttributes);

	if (ensure(IsValid(CombatManager)))
	{
		CombatManager->RegisterToCombatListener(this);
		CombatManager->SkillUsedDelegate.AddDynamic(this, &AEnemyBase::SkillUsed);
	}

	SetCurrentSlot(Slot);

	UpdateDataText();
}

//check if passive skill should be triggered
void AEnemyBase::SkillUsed(ACharacterBase* InCharacter, const ESkillType InSkillType)
{
	if (IsAlive() && IsValid(GetPassiveSkill()))
	{
		if (IsValid(InCharacter))
		{
			if (InSkillType == GetPassiveSkillType())
			{
				if (ensure(IsValid(CombatManager)))
					CombatManager->AddSkillActionToQueue(this);
			}
		}
	}
}

void AEnemyBase::ActivatePrimarySkill()
{
	if (IsAlive())
	{
		if (IsValid(GetPrimarySkill()))
		{
			//we want enemy to just attack at the moment, so skill is directly Deactivated
			//GetPrimarySkill()->Activate();
			GetPrimarySkill()->DeactivateSkill();
		}
	}
	else
	{
		GetPrimarySkill()->DeactivateSkill();
	}
}

void AEnemyBase::ActivatePassiveSkill()
{
	if (IsAlive())
	{
		if (IsValid(GetPassiveSkill()))
		{
			//we want enemy to just attack at the moment, so skill is directly Deactivated
			//GetPassiveSkill()->Activate();
			GetPassiveSkill()->DeactivateSkill();
		}
	}
	else
	{
		GetPassiveSkill()->DeactivateSkill();
	}
}

void AEnemyBase::Attack()
{
	if (ensure(IsValid(CombatManager)))
	{
		TArray<ACharacterBase*> Characters = CombatManager->GetCombatPlayerListeners();
		if (Characters.Num() > 0)
		{
			BP_Attack();
			ACharacterBase* Player = Characters[FMath::RandRange(0, Characters.Num() - 1)];
			if (IsValid(Player))
			{
				Player->AdjustHealth(-GetStr());
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Attacked Non Valid player"));
			}
		}
	}
}

//temp stat visualization
void AEnemyBase::UpdateDataText()
{
	Super::UpdateDataText();
	if (IsValid(StatsText) && IsValid(GetPassiveSkill()) && IsValid(GetPrimarySkill()))
	{
		FString Stats = FString::Printf(TEXT("HP: %d\nSin: %d\nStr:%d"), GetHealth(), GetSin(), GetStr());
		StatsText->SetText(FText::FromString(Stats));
		Stats = FString::Printf(TEXT("%d/5"), EnemyCount);
		EnemyCountText->SetText(Stats);
	}
}

void AEnemyBase::OnDeath()
{
	EnemyCount++;

	if (ensure(IsValid(CombatManager)))
	{
		CombatManager->UnRegisterCombatListener(this);
		CombatManager->SkillUsedDelegate.RemoveDynamic(this, &AEnemyBase::SkillUsed);
	}

	Super::OnDeath();
}
