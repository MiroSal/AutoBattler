// Copyright © 2020 by Miro Salminen

#include "AutoBattlerProtoGameInstance.h"
#include "Kismet/GameplayStatics.h"

UAutoBattlerProtoGameInstance::UAutoBattlerProtoGameInstance()
{
	SoulTrialManager = nullptr;
	CombatManager = nullptr;
}

void UAutoBattlerProtoGameInstance::Init()
{
	Super::Init();
}

void UAutoBattlerProtoGameInstance::EndCombat()
{
	FLatentActionInfo info;
	UGameplayStatics::UnloadStreamLevel(this, "CombatLevel", info, false);
	UGameplayStatics::LoadStreamLevel(this, "PickingLevel", true, true, info);
	EndCombatDelegate.Broadcast();
}

void UAutoBattlerProtoGameInstance::OnStart()
{
	Super::OnStart();

	SoulTrialManager = NewObject<USoulTrialManager>(this, SoulTrialManagerClass, TEXT("SoulTrialManager"));
	SoulTrialManager->Initialize(this);

	CombatManager = NewObject<UCombatManager>(this, UCombatManager::StaticClass(), TEXT("CombatManager"));
	CombatManager->Initialize(this);
}