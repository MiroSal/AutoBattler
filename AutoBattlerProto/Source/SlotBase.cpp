// Copyright © 2020 by Miro Salminen

#include "SlotBase.h"
#include "Engine/World.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "AutoBattlerProtoGameModeBase.h"
#include "AutoBattlerProtoGameInstance.h"
#include "SoulTrialManager.h"
#include "CombatManager.h"
#include "PlayerBase.h"
#include "EnemyBase.h"

ASlotBase::ASlotBase()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	if (Root)
	{
		SetRootComponent(Root);
	}

	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Slot"));
	if (ArrowComponent)
	{
		ArrowComponent->SetupAttachment(GetRootComponent());
	}

	CharacterClass = ACharacterBase::StaticClass();
	CharacterInSlot = nullptr;

	GameInstance = nullptr;
	TrialManager = nullptr;
	CombatManager = nullptr;
}

void ASlotBase::BeginPlay()
{
	Super::BeginPlay();
	check(IsValid(GetWorld()));

	GameInstance = Cast<UAutoBattlerProtoGameInstance>(GetWorld()->GetGameInstance());
	check(IsValid(GameInstance));

	TrialManager = GameInstance->GetSoulTrialManager();
	check(IsValid(TrialManager));

	CombatManager = GameInstance->GetCombatManager();
	check(IsValid(CombatManager));

	GameInstance->EndCombatDelegate.AddDynamic(this, &ASlotBase::CombatEnded);

	//create and assign character to this slot. Get selected attributes from soultrialManager
	if (IsValid(CharacterClass) && !IsValid(CharacterInSlot))
	{
		FActorSpawnParameters Params;
		ACharacterBase* Character = GetWorld()->SpawnActor<ACharacterBase>(CharacterClass, ArrowComponent->GetComponentLocation(), FRotator::ZeroRotator, Params);

		BP_NewCharacterCreated();

		if (ensure(Character))
		{
			if (APlayerBase* Player = Cast<APlayerBase>(Character))
			{
				FCharacterAttributes Attributes = TrialManager->GetSelectedCharacterAttributes();
				Player->Initialize(this, Attributes);
				CharacterInSlot = Player;
			}
			else if (AEnemyBase* Enemy = Cast<AEnemyBase>(Character))
			{
				FCharacterAttributes Attributes = TrialManager->GetRandomizedCharacterAttributes();
				Enemy->Initialize(this, Attributes);
				CharacterInSlot = Enemy;
			}
		}
	}
}

void ASlotBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void ASlotBase::RemoveCurrentCharacterFromSlot()
{
	if (IsValid(CharacterInSlot) && ensure(IsValid(CombatManager)))
	{
		CombatManager->UnRegisterCombatListener(CharacterInSlot);
		CharacterInSlot->Destroy();
	}
	CharacterInSlot = nullptr;
}

void ASlotBase::CharacterInSlotIsDead()
{
	BP_CharacterIsDead();

	if (AEnemyBase* Enemy = Cast<AEnemyBase>(CharacterInSlot))
	{
		if (IsValid(TrialManager))
		{
			FCharacterAttributes Attributes = TrialManager->GetRandomizedCharacterAttributes();
			BP_NewCharacterCreated();
			Enemy->Initialize(this, Attributes);
		}
	}
}

void ASlotBase::CombatEnded()
{
	//RemoveCurrentCharacterFromSlot();
}