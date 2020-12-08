// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"
#include "BaseSlot.h"
#include "SoulTrialManager.h"
#include "AutoBattlerProtoGameModeBase.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "SkillBase.h"
#include "CombatManager.h"

ACharacterBase::ACharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	if (Root)
	{
		SetRootComponent(Root);
	}

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	if (Mesh)
	{
		Mesh->SetupAttachment(GetRootComponent());
	}

	StatsText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("StatsText"));
	if (StatsText)
	{
		StatsText->SetupAttachment(RootComponent);
	}
}

void ACharacterBase::Initialize(ABaseSlot * Slot, bool bCanClick)
{
	GameMode = Cast<AAutoBattlerProtoGameModeBase>(GetWorld()->GetAuthGameMode());
	check(IsValid(GameMode));
	SoulTrialManager = GameMode->GetSoulTrialManager();
	check(IsValid(SoulTrialManager))
	CombatManager = GameMode->GetCombatManager();
	check(IsValid(CombatManager))
}

bool ACharacterBase::Clicked(AActor* ActorToDeactivate)
{
	UE_LOG(LogTemp, Warning, TEXT("Override Clicked function if needed!"));
	return true;
}

bool ACharacterBase::DoubleClicked(AActor* ActorToDeactivate)
{
	UE_LOG(LogTemp, Warning, TEXT("Override DoubleClicked function if needed!"));
	return true;
}

bool ACharacterBase::Deactivate()
{
	UE_LOG(LogTemp, Warning, TEXT("Override Deactivate function if needed!"));
	return true;
}

void ACharacterBase::ActivatePrimarySkill()
{
	UE_LOG(LogTemp, Warning, TEXT("Override ACharacterBase::ActivatePrimarySkill() function!"));
}

void ACharacterBase::ActivatePassiveSkill()
{
	UE_LOG(LogTemp, Warning, TEXT("Override ACharacterBase::ActivatePassiveSkill() function!"));
}

bool ACharacterBase::HealthReduce(int32 Amount)
{
	UE_LOG(LogTemp, Warning, TEXT("Override ACharacterBase::HealthReduce(int32 Amount) function!"));
	return false;
}

bool ACharacterBase::HealthAdd(int32 Amount)
{
	UE_LOG(LogTemp, Warning, TEXT("Override AACharacterBase::HealthAdd(int32 Amount) function!"));
	return false;
}

void ACharacterBase::Attack()
{
	UE_LOG(LogTemp, Warning, TEXT("Override ACharacterBase::Attack() function!"));
}

void ACharacterBase::UpdateDataText()
{
	UE_LOG(LogTemp, Warning, TEXT("Override ACharacterBase::UpdateDataText() function!"));
}

void ACharacterBase::AttackEnd()
{
	CombatManager->ChangeTurn();
}

bool ACharacterBase::StrAdd(int32 Amount)
{
	if (Str >= 0 && Str < 10 && Health > 0)
	{
		Str = FMath::Clamp(Str + Amount, 0, 10);;
		return true;
	}
	return false;
}

bool ACharacterBase::StrReduce(int32 Amount)
{
	if (Str >= 0 && Str <= 10 && Health > 0)
	{
		Str = FMath::Clamp(Str - Amount, 0, 10);
		return true;
	}
	return false;
}

void ACharacterBase::StrSet(int32 Amount)
{
	Str = Amount;
}

bool ACharacterBase::SinReduce(int32 Amount)
{
	if (Sin >= 0 && Sin <= 10 && Health > 0)
	{
		Sin = FMath::Clamp(Sin - Amount, 0, 10);
		return true;
	}
	return false;
}

bool ACharacterBase::SinAdd(int32 Amount)
{
	if (Sin >= 0 && Sin < 10 && Health > 0)
	{
		Sin = FMath::Clamp(Sin + Amount, 0, 10);
		return true;
	}
	return false;
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

void ACharacterBase::SetCurrentSlot(ABaseSlot * NewCurrentSlot)
{
	CurrentSlot = NewCurrentSlot;
}
