// Copyright © 2020 by Miro Salminen

#include "CharacterBase.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"
#include "AutoBattlerProtoGameModeBase.h"
#include "SoulTrialManager.h"
#include "SlotBase.h"
#include "SkillBase.h"

ACharacterBase::ACharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	if (Root)
	{
		SetRootComponent(Root);
	}

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	if (Mesh)
	{
		Mesh->SetupAttachment(GetRootComponent());
	}

	StatsText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("StatsText"));
	if (StatsText)
	{
		StatsText->SetupAttachment(RootComponent);
	}

	SoulTrialManager = nullptr;
	CombatManager = nullptr;
	GameMode = nullptr;

	PrimarySkill = nullptr;
	PassiveSkill = nullptr;

	AllPossiblePrimarySkills = TArray<TSubclassOf<USkillBase>>();
	AllPossiblePassiveSkills = TArray<TSubclassOf<USkillBase>>();

	Health = 0;
	Sin = 0;
	Str = 0;
}

void ACharacterBase::Initialize(ASlotBase * Slot, bool bCanDrag)
{
	GameMode = Cast<AAutoBattlerProtoGameModeBase>(GetWorld()->GetAuthGameMode());
	check(IsValid(GameMode));

	SoulTrialManager = GameMode->GetSoulTrialManager();
	check(IsValid(SoulTrialManager));

	CombatManager = GameMode->GetCombatManager();
	check(IsValid(CombatManager));
}

void ACharacterBase::AttackEnd()
{
	check(IsValid(CombatManager));
	CombatManager->ChangeTurn();
}

void ACharacterBase::RandomizeStats()
{
	Health = FMath::RandRange(1, 10);
	Sin = FMath::RandRange(0, 10);
	Str = FMath::RandRange(0, 10);
	if (AllPossiblePassiveSkills.Num() > 0)
	{
		PassiveSkill = NewObject<USkillBase>(this, AllPossiblePassiveSkills[FMath::RandRange(0, AllPossiblePassiveSkills.Num() - 1)]);
	}

	if (AllPossiblePrimarySkills.Num() > 0)
	{
		PrimarySkill = NewObject<USkillBase>(this, AllPossiblePrimarySkills[FMath::RandRange(0, AllPossiblePrimarySkills.Num() - 1)]);
	}

	if (IsValid(GetPassiveSkill()) && IsValid(GetPrimarySkill()) && IsValid(StatsText))
	{
		FString Stats = FString::Printf(TEXT("HP: %d\nSin: %d\nStr:%d\nPrimary:\n %s\n Passive:\n %s"), GetHealth(), GetSin(), GetStr(), *GetPrimarySkill()->GetSkillInfo(), *GetPassiveSkill()->GetSkillInfo());
		StatsText->SetText(FText::FromString(Stats));
	}
}

void ACharacterBase::SetStr(int32 InStr)
{
	if (GetStr() >= 0 && GetStr() <= 10 && Health > 0)
	{
		Str = FMath::Clamp(GetStr() - InStr, 0, 10);
	}
}

void ACharacterBase::SetSin(int32 InSin)
{
	if (GetSin() >= 0 && GetSin() <= 10 && Health > 0)
	{
		Sin = FMath::Clamp(GetSin() - InSin, 0, 10);
	}
}

void ACharacterBase::SetHealth(int32 InHealth)
{
	if (GetHealth() > 0 && GetHealth() < 10)
	{
		Health = FMath::Clamp(GetHealth() + InHealth, 0, 10);
	}
}

int32 ACharacterBase::GetHealth()
{
	return Health;
}

int32 ACharacterBase::GetSin()
{
	return Sin;
}

int32 ACharacterBase::GetStr()
{
	return Str;
}

bool ACharacterBase::IsAlive()
{
	if (GetHealth() > 0)
	{
		return true;
	}
	return false;
}

void ACharacterBase::SetCurrentSlot(ASlotBase * NewCurrentSlot)
{
	CurrentSlot = NewCurrentSlot;
}
