// Fill out your copyright notice in the Description page of Project Settings.


#include "Ferry.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "SoulTrialManager.h"
#include "SoulSlot.h"
#include "LautturiGameModeBase.h"


// Sets default values
AFerry::AFerry()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	ObjRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = ObjRoot;

	FerryMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FerryMesh"));
	FerryMesh->SetupAttachment(RootComponent);

	SoulSpot1 = CreateDefaultSubobject<UArrowComponent>(TEXT("Slot1"));
	SoulSpot1->SetupAttachment(RootComponent);

	SoulSpot2 = CreateDefaultSubobject<UArrowComponent>(TEXT("Slot2"));
	SoulSpot2->SetupAttachment(RootComponent);

	SoulSpot3 = CreateDefaultSubobject<UArrowComponent>(TEXT("Slot3"));
	SoulSpot3->SetupAttachment(RootComponent);

	SoulSpot4 = CreateDefaultSubobject<UArrowComponent>(TEXT("Slot4"));
	SoulSpot4->SetupAttachment(RootComponent);

	SoulSpot5 = CreateDefaultSubobject<UArrowComponent>(TEXT("Slot5"));
	SoulSpot5->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AFerry::BeginPlay()
{
	Super::BeginPlay();

	GameMode = Cast<ALautturiGameModeBase>(GetWorld()->GetAuthGameMode());
	SoulTrialManager = GameMode->GetSoulTrialManager();
	if (IsValid(SoulTrialManager))
	{
		SoulTrialManager->SoulAddedToJourneyDelegate.AddDynamic(this, &AFerry::AddSoulToFerry);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("SoulTrialManager is not valid!!"));
	}
	
	SoulSpots.Add(FFerrySoulSpot(SoulSpot1,nullptr));
	SoulSpots.Add(FFerrySoulSpot(SoulSpot2,nullptr));
	SoulSpots.Add(FFerrySoulSpot(SoulSpot3,nullptr));
	SoulSpots.Add(FFerrySoulSpot(SoulSpot4,nullptr));
	SoulSpots.Add(FFerrySoulSpot(SoulSpot5,nullptr));

}

void AFerry::AddSoulToFerry(ASoulCard * Soul)
{
	for (int32 i = 0; i < SoulSpots.Num(); i++)
	{
		if (SoulSpots[i].Soul==nullptr)
		{
			SoulSpots[i].Soul = Soul;
			Soul->SetActorLocation(SoulSpots[i].SoulSpot->GetComponentLocation());
			
			ASoulSlot* Slot = Soul->GetCurrentSlot();
			Slot->RemoveSoulFromSlot(false);
			return;
		}
	}
}

// Called every frame
void AFerry::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

