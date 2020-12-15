// Copyright © 2020 by Miro Salminen

#include "DropZone.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "AutoBattlerProtoGameModeBase.h"
#include "SoulTrialManager.h"
#include "SlotBase.h"

// Sets default values
ADropZone::ADropZone()
{
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	if (Root) { SetRootComponent(Root); }

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	if (Mesh) { Mesh->SetupAttachment(GetRootComponent()); }

	CharacterSpot1 = CreateDefaultSubobject<UArrowComponent>(TEXT("Spot1"));
	if (IsValid(CharacterSpot1)) { CharacterSpot1->SetupAttachment(GetRootComponent()); }

	CharacterSpot2 = CreateDefaultSubobject<UArrowComponent>(TEXT("Spot2"));
	if (IsValid(CharacterSpot2)) { CharacterSpot2->SetupAttachment(GetRootComponent()); }

	CharacterSpot3 = CreateDefaultSubobject<UArrowComponent>(TEXT("Spot3"));
	if (IsValid(CharacterSpot3)) { CharacterSpot3->SetupAttachment(GetRootComponent()); }

	CharacterSpot4 = CreateDefaultSubobject<UArrowComponent>(TEXT("Spot4"));
	if (IsValid(CharacterSpot4)) { CharacterSpot4->SetupAttachment(GetRootComponent()); }

	CharacterSpot5 = CreateDefaultSubobject<UArrowComponent>(TEXT("Spot5"));
	if (IsValid(CharacterSpot5)) { CharacterSpot5->SetupAttachment(GetRootComponent()); }
}

// Called when the game starts or when spawned
void ADropZone::BeginPlay()
{
	Super::BeginPlay();
	CharacterSpots.Add(FFerrySoulSpot(CharacterSpot1, nullptr));
	CharacterSpots.Add(FFerrySoulSpot(CharacterSpot2, nullptr));
	CharacterSpots.Add(FFerrySoulSpot(CharacterSpot3, nullptr));
	CharacterSpots.Add(FFerrySoulSpot(CharacterSpot4, nullptr));
	CharacterSpots.Add(FFerrySoulSpot(CharacterSpot5, nullptr));
}

bool ADropZone::CanDrop(AActor * ActorToDrop)
{
	if (IsValid(ActorToDrop))
	{
		for (int32 i = 0; i < CharacterSpots.Num(); i++)
		{
			if (!IsValid(CharacterSpots[i].Character))
			{
				ActorToDrop->SetActorLocation(CharacterSpots[i].CharacterSpot->GetComponentLocation());

				return true;
			}
		}
	}
	return false;
}

void ADropZone::Drop(AActor * ActorToDrop)
{
	APlayerCharacter* Character = Cast<APlayerCharacter>(ActorToDrop);

	if (IsValid(Character))
	{
		for (int32 i = 0; i < CharacterSpots.Num(); i++)
		{
			if (!IsValid(CharacterSpots[i].Character))
			{
				Character->CanClick(false);
				Character->SetActorLocation(CharacterSpots[i].CharacterSpot->GetComponentLocation());
				CharacterSpots[i].Character = Character;

				AAutoBattlerProtoGameModeBase* GameMode = Cast<AAutoBattlerProtoGameModeBase>(GetWorld()->GetAuthGameMode());
				check(IsValid(GameMode));
				USoulTrialManager* SoulTrialManager = GameMode->GetSoulTrialManager();
				check(IsValid(SoulTrialManager));
				SoulTrialManager->AddCharacterToCombat(Character);

				ASlotBase* Slot = Character->GetCurrentSlot();
				Slot->RemoveCharacterFromSlot(false);
				return;
			}
		}
	}
}
