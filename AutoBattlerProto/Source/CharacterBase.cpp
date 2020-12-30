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
		FString Stats = FString::Printf(TEXT("HP: %d\nSin: %d\nStr:%d"), GetHealth(), GetSin(), GetStr());
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

void ACharacterBase::AdjustStr(const int32 InStr, bool bSetToValue)
{
	if (bSetToValue)
	{
		Str = FMath::Clamp(GetStr() + InStr, MIN_STATVALUE, MAX_STATVALUE);

	}
	else
	{
		Str = FMath::Clamp(GetStr() + InStr, MIN_STATVALUE, MAX_STATVALUE);
	}

	UpdateDataText();
}

void ACharacterBase::AdjustSin(const int32 InSin, bool bSetToValue)
{
	if (bSetToValue)
	{
		Sin = FMath::Clamp(InSin, MIN_STATVALUE, MAX_STATVALUE);

	}
	else
	{
		Sin = FMath::Clamp(GetSin() + InSin, MIN_STATVALUE, MAX_STATVALUE);
	}

	UpdateDataText();
}

void ACharacterBase::AdjustHealth(const int32 InHealth, bool bSetToValue)
{

	if (bSetToValue)
	{
		Health = FMath::Clamp(InHealth, MIN_STATVALUE, MAX_STATVALUE);
	}
	else
	{
		Health = FMath::Clamp(GetHealth() + InHealth, MIN_STATVALUE, MAX_STATVALUE);
	}
	if (InHealth < 0)
		BP_DamageTaken(InHealth);

	if (!IsAlive())
	{
		OnDeath();
	}

	UpdateDataText();
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
