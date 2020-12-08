// Fill out your copyright notice in the Description page of Project Settings.


#include "Ferry.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "SoulTrialManager.h"
#include "BaseSlot.h"
#include "AutoBattlerProtoGameModeBase.h"

// Sets default values
AFerry::AFerry()
{
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	FerryMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FerryMesh"));
	FerryMesh->SetupAttachment(GetRootComponent());

	SoulSpot1 = CreateDefaultSubobject<UArrowComponent>(TEXT("Slot1"));
	if (IsValid(SoulSpot1)){ SoulSpot1->SetupAttachment(GetRootComponent());}

	SoulSpot2 = CreateDefaultSubobject<UArrowComponent>(TEXT("Slot2"));
	if (IsValid(SoulSpot2)) { SoulSpot2->SetupAttachment(GetRootComponent()); }

	SoulSpot3 = CreateDefaultSubobject<UArrowComponent>(TEXT("Slot3"));
	if (IsValid(SoulSpot3)) { SoulSpot3->SetupAttachment(GetRootComponent()); }

	SoulSpot4 = CreateDefaultSubobject<UArrowComponent>(TEXT("Slot4"));
	if (IsValid(SoulSpot4)) { SoulSpot4->SetupAttachment(GetRootComponent()); }

	SoulSpot5 = CreateDefaultSubobject<UArrowComponent>(TEXT("Slot5"));
	if (IsValid(SoulSpot5)) { SoulSpot5->SetupAttachment(GetRootComponent()); }
}

// Called when the game starts or when spawned
void AFerry::BeginPlay()
{
	Super::BeginPlay();

	SoulSpots.Add(FFerrySoulSpot(SoulSpot1, nullptr));
	SoulSpots.Add(FFerrySoulSpot(SoulSpot2, nullptr));
	SoulSpots.Add(FFerrySoulSpot(SoulSpot3, nullptr));
	SoulSpots.Add(FFerrySoulSpot(SoulSpot4, nullptr));
	SoulSpots.Add(FFerrySoulSpot(SoulSpot5, nullptr));
}

bool AFerry::ActorCanBeDropped(AActor * ActorToDrop)
{
	if (IsValid(ActorToDrop))
	{
		for (int32 i = 0; i < SoulSpots.Num(); i++)
		{
			if (!IsValid(SoulSpots[i].Soul))
			{
				ActorToDrop->SetActorLocation(SoulSpots[i].SoulSpot->GetComponentLocation());

				return true;
			}
		}
	}
	return false;
}

void AFerry::ActorDrop(AActor * ActorToDrop)
{
	USoulTrialManager* SoulTrialManager = Cast<AAutoBattlerProtoGameModeBase>(GetWorld()->GetAuthGameMode())->GetSoulTrialManager();
	ASoulCard* Soul = Cast<ASoulCard>(ActorToDrop);

	if (IsValid(Soul) && IsValid(SoulTrialManager))
	{
		for (int32 i = 0; i < SoulSpots.Num(); i++)
		{
			if (!IsValid(SoulSpots[i].Soul))
			{
				Soul->CanClick(false);
				Soul->SetActorLocation(SoulSpots[i].SoulSpot->GetComponentLocation());
				SoulSpots[i].Soul = Soul;
				SoulTrialManager->AddSoulToJourney(Soul);
				ABaseSlot* Slot = Soul->GetCurrentSlot();
				Slot->RemoveCharacterFromSlot(false);
				return;
			}
		}
	}
}
