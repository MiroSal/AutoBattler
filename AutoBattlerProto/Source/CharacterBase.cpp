// Copyright © 2020 by Miro Salminen

#include "CharacterBase.h"
#include "Engine/World.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"
#include "AutoBattlerProtoGameModeBase.h"
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

	 PrimarySkill = nullptr;
	PassiveSkill = nullptr;

	AllPossiblePrimarySkills = TArray<TSubclassOf<USkillBase>>();
	AllPossiblePassiveSkills = TArray<TSubclassOf<USkillBase>>();

	Health = 0;
	Sin = 0;
	Str = 0;
}

void ACharacterBase::Initialize(ASlotBase * Slot, FCharacterAttributes InAttributes)
{
	Health = InAttributes.Health;
	Sin = InAttributes.Sin;
	Str = InAttributes.Str;
	if (InAttributes.PassiveSkill != nullptr)
	{
		PassiveSkill = NewObject<USkillBase>(this, InAttributes.PassiveSkill);
	}
	if (InAttributes.PrimarySkill != nullptr)
	{
		PrimarySkill = NewObject<USkillBase>(this, InAttributes.PrimarySkill);
	}

	if (IsValid(GetPassiveSkill()) && IsValid(GetPrimarySkill()) && IsValid(StatsText))
	{
		FString Stats = FString::Printf(TEXT("HP: %d\nSin: %d\nStr:%d\nPrimary:\n %s\n Passive:\n %s"), GetHealth(), GetSin(), GetStr(), *GetPrimarySkill()->GetSkillInfo(), *GetPassiveSkill()->GetSkillInfo());
		StatsText->SetText(FText::FromString(Stats));
	}
}

void ACharacterBase::AttackEnd()
{
	check(IsValid(GetWorld()));
	UAutoBattlerProtoGameInstance* GameInstance = Cast<UAutoBattlerProtoGameInstance>(GetWorld()->GetGameInstance());
	check(IsValid(GameInstance));

	UCombatManager* CombatManager = GameInstance->GetCombatManager();
	check(IsValid(CombatManager));

	CombatManager->ChangeTurn();
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

bool ACharacterBase::IsAlive()
{
	if (GetHealth() > 0)
	{
		return true;
	}
	return false;
}