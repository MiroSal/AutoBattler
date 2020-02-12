// Fill out your copyright notice in the Description page of Project Settings.


#include "SoulCard.h"
#include "Components/TextRenderComponent.h"
#include "SoulTrialManager.h"
#include "SkillBase.h"
#include "CombatManager.h"
#include "LautturiGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "SoulSlot.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

#define GETENUMSTRING(etype, evalue) ( (FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true) != nullptr) ? FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true)->GetEnumName((int32)evalue) : FString("Invalid - are you sure enum uses UENUM() macro?") )

void ASoulCard::ActionSkillUsed(FSoulData ActionInfo)
{
	if (ActionInfo.SkillType == PassiveSkill->GetSkillType())
	{
		if (ActionInfo.CharacterBase != this)
		{
			UE_LOG(LogTemp, Warning, TEXT("Message reseived!!"));
			CombatManager->AddSkillActionToQueue(FSoulData(this, PassiveSkill->GetSkillType()));
		}
	}
}

// Sets default values
ASoulCard::ASoulCard()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StatsText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("StatsText"));
	StatsText->SetupAttachment(RootComponent);

	SoulStatusText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("SoulStatusText"));
	SoulStatusText->SetupAttachment(RootComponent);

}

void ASoulCard::Initialize(ABaseSlot* Slot, bool bCanClick)
{
	Super::Initialize(Slot, bCanClick);

	CurrentSlot = Slot;
	bCanBeClicked = bCanClick;

	SoulTrialManager->FerryIsFullDelegate.AddDynamic(this, &ASoulCard::CanClick);
	RandomizeStats();
	//TODO Remove when not needed, debug line for adding Souls to combatmanager listenerArray when making combat level
	CombatManager->RegisterSoulListener(this);
	CombatManager->SkillUsedDelegate.AddDynamic(this, &ASoulCard::ActionSkillUsed);
}

ABaseSlot* ASoulCard::GetCurrentSlot()
{
	return CurrentSlot;
}

void ASoulCard::CanClick(bool bCanClick)
{
	bCanBeClicked = bCanClick;
}

void ASoulCard::ActivatePrimarySkill()
{
	if (IsValid(PrimarySkill))
	{
		UE_LOG(LogTemp, Warning, TEXT("Activateing Primary"));
		PrimarySkill->ActivateSkill();
	}
}

void ASoulCard::ActivatePassiveSkill()
{
	if (IsValid(PassiveSkill))
	{
		UE_LOG(LogTemp, Warning, TEXT("Activateing Passive"));

		PassiveSkill->ActivateSkill();
	}
}

ABaseSlot * ASoulCard::GetSlot()
{
	return CurrentSlot;
}

ESkillType ASoulCard::GetPrimarySkillType()
{
	return PrimarySkill->GetSkillType();
}

ESkillType ASoulCard::GetPassiveSkillType()
{
	return PassiveSkill->GetSkillType();
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

	PassiveSkill = NewObject<USkillBase>(this, AllPossibleSkills[FMath::RandRange(0, AllPossibleSkills.Num() - 1)]);
	PrimarySkill = NewObject<USkillBase>(this, AllPossibleSkills[FMath::RandRange(0, AllPossibleSkills.Num() - 1)]);
	PassiveSkill->Initialize(this, CombatManager);
	PrimarySkill->Initialize(this, CombatManager);

	FString Stats = FString::Printf(TEXT("HP: %d\nSin: %d\nStr:%d"), Hp, Sin, Str);

	StatsText->SetText(FText::FromString(Stats));
}

bool ASoulCard::Clicked(AActor* ActorToDeactivate)
{
	if (bCanBeClicked)
	{
		IActivationInterface* LastActorClicked = Cast<IActivationInterface>(ActorToDeactivate);
		ASoulCard* Soul = Cast<ASoulCard>(ActorToDeactivate);
		if (IsValid(Soul))
		{
			if (bIsAlive && LastActorClicked == this)//if Soul is still alive and has Activationinterface so that can be clicked with mouse
			{
				LastActorClicked->Deactivate();
				//CurrentSlot->RemoveCharacterFromSlot(true);
			}
			else if (Soul->bIsAlive && LastActorClicked != this)
			{
				LastActorClicked->Deactivate();
			}
			else if (!bHasCoin && LastActorClicked)//if soul has no coin and has Activationinterface so that can be clicked with mouse
			{
				if (!Soul->HasCoin() && Soul != this && !bHasCoin && !bIsAlive)//if last clicked soul dont have coin and it is not this
				{
					Soul->GetCurrentSlot()->RemoveCharacterFromSlot(true);
					CurrentSlot->RemoveCharacterFromSlot(true);
				}
			}
		}

		if (LastActorClicked)//deactivates last activated actor before activating next
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

bool ASoulCard::DoubleClicked(AActor* ActorToDeactivate)
{
	if (bCanBeClicked)
	{
		IActivationInterface* LastActorClicked = Cast<IActivationInterface>(ActorToDeactivate);

		if (bIsAlive && LastActorClicked == this)//if Soul is still alive and has Activationinterface so that can be clicked with mouse
		{
			LastActorClicked->Deactivate();
			CurrentSlot->RemoveCharacterFromSlot(true);
		}

		//TODO add these to mouse drop
		//SoulTrialManager->AddSoulToJourney(this);
		//CombatManager->RegisterSoulListener(this);

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
