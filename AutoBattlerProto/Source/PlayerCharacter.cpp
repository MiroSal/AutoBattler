// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerCharacter.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SoulTrialManager.h"
#include "CombatManager.h"
#include "AutoBattlerProtoGameModeBase.h"
#include "SlotBase.h"

APlayerCharacter::APlayerCharacter()
{
	SoulStatusText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("SoulStatusText"));
	if (SoulStatusText)
	{
		SoulStatusText->SetupAttachment(RootComponent);
	}
}

void APlayerCharacter::Initialize(ASlotBase* Slot, FCharacterAttributes InAttributes)
{
	Super::Initialize(Slot, InAttributes);

	SetCurrentSlot(Slot);

	GameMode = Cast<AAutoBattlerProtoGameModeBase>(GetWorld()->GetAuthGameMode());
	check(IsValid(GameMode));

	CombatManager = GameMode->GetCombatManager();
	check(IsValid(CombatManager));
	CombatManager->RegisterCombatListener(this);
	CombatManager->SkillUsedDelegate.AddDynamic(this, &APlayerCharacter::SkillUsed);

	UpdateDataText();
}

//check is passive skill should be triggered
void APlayerCharacter::SkillUsed(ACharacterBase* InCharacter, ESkillType InSkillType)
{
	if (GetHealth() > 0 && IsValid(GetPassiveSkill()))
	{
		if (InSkillType == GetPassiveSkillType())
		{
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
	BP_Attack();
	check(IsValid(CombatManager));
	TArray<ACharacterBase*> Enemies = CombatManager->GetCombatEnemyListeners();
	if (Enemies.Num() > 0)
	{
		ACharacterBase* Enemy = Enemies[FMath::RandRange(0, Enemies.Num() - 1)];
		if (IsValid(Enemy))
		{
			Enemy->HealthReduce(GetStr());
		}
	}
}

void APlayerCharacter::UpdateDataText()
{
	Super::UpdateDataText();
	if (IsValid(StatsText) && IsValid(GetPassiveSkill()) && IsValid(GetPrimarySkill()))
	{
		FString Stats = FString::Printf(TEXT("HP: %d\nSin: %d\nStr:%d\nPrimary:\n %s\n Passive:\n %s"), GetHealth(), GetSin(), GetStr(), *GetPrimarySkill()->GetSkillInfo(), *GetPassiveSkill()->GetSkillInfo());
		StatsText->SetText(FText::FromString(Stats));
	}
}