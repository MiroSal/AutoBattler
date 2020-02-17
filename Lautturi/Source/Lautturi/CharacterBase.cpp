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

void ACharacterBase::HealthReduce(int32 Amount)
{
	UE_LOG(LogTemp, Warning, TEXT("Override ACharacterBase::HealthReduce(int32 Amount) function!"));
}

void ACharacterBase::HealthAdd(int32 Amount)
{
	UE_LOG(LogTemp, Warning, TEXT("Override AACharacterBase::HealthAdd(int32 Amount) function!"));
}

void ACharacterBase::Attack()
{
	UE_LOG(LogTemp, Warning, TEXT("Override ACharacterBase::Attack() function!"));
}