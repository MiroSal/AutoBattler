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

#define MAX_STATVALUE 10
#define MIN_STATVALUE 0

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

	AllPossiblePrimarySkillClasses = TArray<TSubclassOf<USkillBase>>();
	AllPossiblePassiveSkillClasses = TArray<TSubclassOf<USkillBase>>();

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

	//temp for stat visualization
	if (IsValid(GetPassiveSkill()) && IsValid(GetPrimarySkill()) && IsValid(StatsText))
	{
		FString Stats = FString::Printf(TEXT("HP: %d\nSin: %d\nStr:%d\nPrimary:\n %s\n Passive:\n %s"), GetHealth(), GetSin(), GetStr(), *GetPrimarySkill()->GetSkillInfo(), *GetPassiveSkill()->GetSkillInfo());
		StatsText->SetText(FText::FromString(Stats));
	}
}

//Change turn after attack
void ACharacterBase::AttackEnd()
{
	check(IsValid(GetWorld()));
	UAutoBattlerProtoGameInstance* GameInstance = Cast<UAutoBattlerProtoGameInstance>(GetWorld()->GetGameInstance());
	check(IsValid(GameInstance));

	UCombatManager* CombatManager = GameInstance->GetCombatManager();
	check(IsValid(CombatManager));

	CombatManager->ChangeTurn();
}

void ACharacterBase::SetStr(const int32 InStr)
{
	if (GetStr() >= MIN_STATVALUE && GetStr() <= MAX_STATVALUE && Health > MIN_STATVALUE)
	{
		Str = FMath::Clamp(GetStr() + InStr, MIN_STATVALUE, MAX_STATVALUE);
	}

	UpdateDataText();
}

void ACharacterBase::SetSin(const int32 InSin)
{
	if (GetSin() >= MIN_STATVALUE && GetSin() <= MAX_STATVALUE && Health > MIN_STATVALUE)
	{
		Sin = FMath::Clamp(GetSin() + InSin, MIN_STATVALUE, MAX_STATVALUE);
	}

	UpdateDataText();
}

void ACharacterBase::SetHealth(const int32 InHealth)
{
	if (GetHealth() > MIN_STATVALUE && GetHealth() <= MAX_STATVALUE)
	{
		Health = FMath::Clamp(GetHealth() + InHealth, MIN_STATVALUE, MAX_STATVALUE);
		if (InHealth <= MIN_STATVALUE)
		{
			BP_DamageTaken(InHealth);
		}

		if (!IsAlive())
		{
			OnDeath();
		}

		UpdateDataText();
	}
}

bool ACharacterBase::IsAlive()
{
	if (GetHealth() > MIN_STATVALUE)
	{
		return true;
	}
	return false;
}

void ACharacterBase::OnDeath()
{
	BP_OnDeath();
	if (IsValid(CurrentSlot))
	{
		CurrentSlot->CharacterIsDead();
	}
}
