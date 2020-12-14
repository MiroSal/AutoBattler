// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerCharacter.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SoulTrialManager.h"
#include "CombatManager.h"
#include "AutoBattlerProtoGameModeBase.h"
#include "SlotBase.h"

APlayerCharacter::APlayerCharacter()
{
	SoulStatusText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("SoulStatusText"));
	if (SoulStatusText)
	{
		SoulStatusText->SetupAttachment(RootComponent);
	}

	DraggableParams = FDraggableParams();
}

void APlayerCharacter::Initialize(ASlotBase* Slot, bool bCanBeDragged)
{
	Super::Initialize(Slot, bCanBeDragged);

	SetCurrentSlot(Slot);
	DraggableParams.bDraggable = bCanBeDragged;

	check(IsValid(SoulTrialManager));
	SoulTrialManager->FerryIsFullDelegate.AddDynamic(this, &APlayerCharacter::CanClick);
	RandomizeStats();
}

//Binded to delegate, Sets bDraggable to false for every playercharacter when charcater are picked
void APlayerCharacter::CanClick(bool bCanBeDragged)
{
	DraggableParams.bDraggable = bCanBeDragged;
}

void APlayerCharacter::CombatInitialize(ACharacterBase* Character)
{
	check(IsValid(CombatManager));
	CombatManager->RegisterSoulListener(this);
	CombatManager->SkillUsedDelegate.AddDynamic(this, &APlayerCharacter::SkillUsed);

	UpdateDataText();
}

//check is passive skill should be triggered
void APlayerCharacter::SkillUsed(FCharacterData Data)
{
	if (GetHealth() > 0 && IsValid(GetPassiveSkill()))
	{
		if (Data.SkillType == GetPassiveSkillType())
		{
			check(IsValid(CombatManager));
			CombatManager->AddSkillActionToQueue(FCharacterData(this, GetPassiveSkillType()));
		}
	}
}

void APlayerCharacter::ActivatePrimarySkill()
{
	if (GetHealth() > 0 && IsValid(GetPrimarySkill()))
	{
		if (IsValid(GetPrimarySkill()))
		{
			GetPrimarySkill()->BP_ActivateSkill();
			BP_SkillUsed(GetPrimarySkill());
		}
	}
	else if (IsValid(GetPrimarySkill()))
	{
		GetPrimarySkill()->DeactivateSkill();
	}
}

void APlayerCharacter::ActivatePassiveSkill()
{
	if (GetHealth() > 0 && IsValid(GetPassiveSkill()))
	{
		if (IsValid(GetPassiveSkill()))
		{
			GetPassiveSkill()->BP_ActivateSkill();
			BP_SkillUsed(GetPassiveSkill());
		}
	}
	else if (IsValid(GetPassiveSkill()))
	{
		GetPassiveSkill()->DeactivateSkill();
	}
}

void APlayerCharacter::RandomizeStats()
{
	Super::RandomizeStats();

	GetPassiveSkill()->Initialize(this);
	GetPrimarySkill()->Initialize(this);

	if (!IsValid(SoulStatusText))
		return;

	DraggableParams.bHasCoin = FMath::RandRange(0, 1);

	if (!DraggableParams.bHasCoin)
	{
		DraggableParams.bIsAlive = FMath::RandRange(0, 1);
		if (DraggableParams.bIsAlive)
		{
			SoulStatusText->SetText(FText::FromString(TEXT("Alive")));
		}
		else
		{
			SoulStatusText->SetText(FText::FromString(TEXT("NoCoin")));
		}
	}
	else
	{
		SoulStatusText->SetText(FText::FromString(TEXT("Coin")));
	}

	UpdateDataText();
}

bool APlayerCharacter::Clicked(AActor* ActorToDeactivate)
{
	if (DraggableParams.bDraggable)
	{
		IActivationInterface* LastClicked = Cast<IActivationInterface>(ActorToDeactivate);
		APlayerCharacter* Player = Cast<APlayerCharacter>(ActorToDeactivate);
		if (IsValid(Player) && LastClicked != nullptr)
		{
			if (DraggableParams.bIsAlive && LastClicked == this)//if Player is still alive and has Activationinterface so that can be clicked with mouse
			{
				LastClicked->Deactivate();
			}
			else if (Player->DraggableParams.bIsAlive && LastClicked != this)
			{
				LastClicked->Deactivate();
			}
			else if (!DraggableParams.bHasCoin && LastClicked)//if soul has no coin and has Activationinterface so that can be clicked with mouse
			{
				if (!Player->HasCoin() && Player != this && !DraggableParams.bHasCoin && !DraggableParams.bIsAlive)//if last clicked soul dont have coin and it is not this
				{
					Player->GetCurrentSlot()->RemoveCharacterFromSlot(true);
					this->GetCurrentSlot()->RemoveCharacterFromSlot(true);
				}
			}
		}

		if (LastClicked)//deactivates last activated actor before activating next
		{
			LastClicked->Deactivate();
		}
		return true;
	}
	else
	{
		return false;
	}
}

bool APlayerCharacter::DoubleClicked(AActor* ActorToDeactivate)
{
	if (DraggableParams.bDraggable)
	{
		IActivationInterface* LastActorClicked = Cast<IActivationInterface>(ActorToDeactivate);

		if (DraggableParams.bIsAlive && LastActorClicked != nullptr && LastActorClicked == this)//if Player is alive and has Activationinterface so that can be clicked with mouse
		{
			LastActorClicked->Deactivate();
			GetCurrentSlot()->RemoveCharacterFromSlot(true);
		}
	}
	return false;
}

//TODO what is this, Why is this
bool APlayerCharacter::Deactivate()
{
	return true;
}

void APlayerCharacter::Attack()
{
	BP_Attack();
	TArray<ACharacterBase*> Enemies = CombatManager->GetAllEnemies();
	if (Enemies.Num() > 0)
	{
		ACharacterBase* Enemy = Enemies[FMath::RandRange(0, Enemies.Num() - 1)];
		if (IsValid(Enemy))
		{
			Enemy->HealthReduce(GetStr());
		}
	}
}

void APlayerCharacter::UpdateDataText()
{
	Super::UpdateDataText();
	if (IsValid(StatsText) && IsValid(GetPassiveSkill()) && IsValid(GetPrimarySkill()))
	{
		FString Stats = FString::Printf(TEXT("HP: %d\nSin: %d\nStr:%d\nPrimary:\n %s\n Passive:\n %s"), GetHealth(), GetSin(), GetStr(), *GetPrimarySkill()->GetSkillInfo(), *GetPassiveSkill()->GetSkillInfo());
		StatsText->SetText(FText::FromString(Stats));
	}
}