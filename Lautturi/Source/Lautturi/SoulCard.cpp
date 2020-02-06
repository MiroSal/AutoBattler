// Fill out your copyright notice in the Description page of Project Settings.


#include "SoulCard.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"
#include "SoulTrialManager.h"
#include "CombatManager.h"
#include "LautturiGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "SoulSlot.h"

// Sets default values
ASoulCard::ASoulCard()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ObjRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = ObjRoot;

	SoulMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SoulMesh"));
	SoulMesh->SetupAttachment(RootComponent);

	StatsText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("StatsText"));
	StatsText->SetupAttachment(RootComponent);

	SoulStatusText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("SoulStatusText"));
	SoulStatusText->SetupAttachment(RootComponent);
}

void ASoulCard::Initialize(ASoulSlot* SoulSlot, bool bCanClick)
{
	CurrentSlot = SoulSlot;
	bCanBeClicked = bCanClick;

	GameMode = Cast<ALautturiGameModeBase>(GetWorld()->GetAuthGameMode());

	SoulTrialManager = GameMode->GetSoulTrialManager();
	if (!IsValid(SoulTrialManager))
	{
		UE_LOG(LogTemp, Warning, TEXT("SoulTrialManager is not valid!!"));
	}

	SoulTrialManager->FerryIsFullDelegate.AddDynamic(this, &ASoulCard::CanClick);

	CombatManager = GameMode->GetCombatManager();
	if (!IsValid(CombatManager))
	{
		UE_LOG(LogTemp, Warning, TEXT("CombatManager is not valid!!"));
	}


	RandomizeStats();
}

ASoulSlot * ASoulCard::GetCurrentSlot()
{
	return CurrentSlot;
}

void ASoulCard::CanClick(bool bCanClick)
{
	bCanBeClicked = bCanClick;
}

// Called when the game starts or when spawned
void ASoulCard::BeginPlay()
{
	Super::BeginPlay();


}

// Called every frame
void ASoulCard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ASoulCard::RandomizeStats()
{
	bHasCoin = FMath::RandRange(0, 1);

	if (!bHasCoin)
	{
		bIsAlive = FMath::RandRange(0, 1);
		if (bIsAlive)
		{
			SoulStatusText->SetText(FText::FromString(TEXT("Alive")));
		}
		else
		{
			SoulStatusText->SetText(FText::FromString(TEXT("NoCoin")));
		}
		SoulMesh->SetMaterial(0, DeactivatedColor);
	}
	else
	{
		SoulStatusText->SetText(FText::FromString(TEXT("Coin")));
	}

	Hp = FMath::RandRange(0, 10);
	Sin = FMath::RandRange(0, 10);
	Str = FMath::RandRange(0, 10);

	PassiveSkillType = ESkillType::Heal;

	FString Stats = FString::Printf(TEXT("HP: %d\nSin: %d\nStr:%d"), Hp, Sin, Str);

	StatsText->SetText(FText::FromString(Stats));

}

bool ASoulCard::Clicked(AActor* ActorToDeactivate)
{
	if (bCanBeClicked)
	{
		IActivationInterface* LastActorClicked = Cast<IActivationInterface>(ActorToDeactivate);

		if (bIsAlive && LastActorClicked == this)//if Soul is still alive and has Activationinterface so that can be clicked with mouse
		{
			LastActorClicked->Deactivate();
			CurrentSlot->RemoveSoulFromSlot(true);
		}
		else if (!bHasCoin && LastActorClicked)//if soul has no coin and has Activationinterface so that can be clicked with mouse
		{
			ASoulCard* Soul = Cast<ASoulCard>(ActorToDeactivate);
			if (IsValid(Soul))
			{
				if (!Soul->HasCoin() && Soul != this)//if last clicked soul dont have coin and it is not this
				{
					Soul->GetCurrentSlot()->RemoveSoulFromSlot(true);
					CurrentSlot->RemoveSoulFromSlot(true);
				}
			}
		}
		else if (LastActorClicked)//deactivates last activated actor before activating next
		{
			LastActorClicked->Deactivate();
		}
		SoulMesh->SetMaterial(0, ActivatedColor);
		return true;

	}
	else
	{
		return false;
	}
}

bool ASoulCard::DoubleClicked()
{
	if (bCanBeClicked)
	{
		if (GameMode != nullptr)
		{
			if (IsValid(SoulTrialManager))
			{
				SoulTrialManager->AddSoulToJourney(this);
				CombatManager->RegisterToListener(FSoulData(this, PassiveSkillType));
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("SoulTrialManager is not Valid"));
			}
		}
	}
	return false;
}

bool ASoulCard::Deactivate()
{
	SoulMesh->SetMaterial(0, DeactivatedColor);
	return  true;
}

bool ASoulCard::HasCoin()
{
	return bHasCoin;
}
