// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"
#include "BaseSlot.h"
#include "SoulTrialManager.h"
#include "LautturiGameModeBase.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

ACharacterBase::ACharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;

	ObjRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = ObjRoot;

	SoulMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SoulMesh"));
	SoulMesh->SetupAttachment(RootComponent);
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

void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACharacterBase::ActivatePrimarySkill()
{
	UE_LOG(LogTemp, Warning, TEXT("Override ACharacterBase::ActivatePrimarySkill() function!"));
}

void ACharacterBase::ActivatePassiveSkill()
{
	UE_LOG(LogTemp, Warning, TEXT("Override ACharacterBase::ActivatePassiveSkill() function!"));
}

ABaseSlot * ACharacterBase::GetSlot()
{
	UE_LOG(LogTemp, Warning, TEXT("Override ACharacterBase::GetSlot() function!"));

	return nullptr;
}

ETurnEnum ACharacterBase::GetCharacterType()
{
	return CharacterType;
}

void ACharacterBase::Initialize(ABaseSlot * Slot, bool bCanClick)
{
	GameMode = Cast<ALautturiGameModeBase>(GetWorld()->GetAuthGameMode());
	SoulTrialManager = GameMode->GetSoulTrialManager();
	if (!IsValid(SoulTrialManager))
	{
		UE_LOG(LogTemp, Warning, TEXT("SoulTrialManager is not valid!!"));
	}

	CombatManager = GameMode->GetCombatManager();
	if (!IsValid(CombatManager))
	{
		UE_LOG(LogTemp, Warning, TEXT("CombatManager is not valid!!"));
	}
}

ESkillType ACharacterBase::GetPrimarySkillType()
{
	UE_LOG(LogTemp, Warning, TEXT("Override GetPrimarySkillType function!"));

	return ESkillType();
}

ESkillType ACharacterBase::GetPassiveSkillType()
{
	UE_LOG(LogTemp, Warning, TEXT("Override GetPassiveSkillType function!"));

	return ESkillType();
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

void ACharacterBase::AttackEnd()
{
	CombatManager->ChangeTurn();
}

void ACharacterBase::UpdateDataText()
{
	UE_LOG(LogTemp, Warning, TEXT("Override ACharacterBase::UpdateDataText() function!"));
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
	if (Str >= 0 && Str < 10 && Health > 0)
	{
		Str = FMath::Clamp(Str + Amount, 0, 10);
		return true;
	}
	return false;
}

bool ACharacterBase::SinReduce(int32 Amount)
{
	if (Sin >= 0 && Sin < 10 && Health > 0)
	{
		Sin = FMath::Clamp(Sin + Amount, 0, 10);
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
