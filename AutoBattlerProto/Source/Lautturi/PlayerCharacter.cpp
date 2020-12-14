// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerCharacter.h"
#include "SoulTrialManager.h"
#include "BaseSlot.h"
#include "CharacterBase.h"
#include "CombatManager.h"
#include "AutoBattlerProtoGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

APlayerCharacter::APlayerCharacter()
{
	SoulStatusText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("SoulStatusText"));
	SoulStatusText->SetupAttachment(RootComponent);

	bHasCoin = false;
	bIsAlive = true;
	bTestAction = false;
	bCanBeClicked = true;

	PrimarySkill = nullptr;
	PassiveSkill = nullptr;
}

void APlayerCharacter::ActionSkillUsed(FSoulData ActionInfo)
{
	if (Health > 0)
	{
		if (ActionInfo.SkillType == PassiveSkill->GetActivateSkillType())
		{
			if (Cast<ASoulCard>(ActionInfo.CharacterBase))
			{
				UE_LOG(LogTemp, Warning, TEXT("Message reseived!!"));
				CombatManager->AddSkillActionToQueue(FSoulData(this, PassiveSkill->GetSkillType()));
			}
		}
	}
}

void APlayerCharacter::Initialize(ABaseSlot* Slot, bool bCanClick)
{
	Super::Initialize(Slot, bCanClick);

	CurrentSlot = Slot;
	bCanBeClicked = bCanClick;

	SoulTrialManager->FerryIsFullDelegate.AddDynamic(this, &APlayerCharacter::CanClick);
	RandomizeStats();
}

void APlayerCharacter::CanClick(bool bCanClick)
{
	bCanBeClicked = bCanClick;
}

void APlayerCharacter::ActivatePrimarySkill()
{
	if (Health > 0)
	{
		if (IsValid(PrimarySkill))
		{
			UE_LOG(LogTemp, Warning, TEXT("Activating Primary %s"), *PrimarySkill->GetFName().ToString());
			PrimarySkill->BP_ActivateSkill();
			BP_SkillUsed(PrimarySkill);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Invalid primary skill"));
		}
	}
	else
	{
		PrimarySkill->DeactivateSkill();
	}
}

void APlayerCharacter::ActivatePassiveSkill()
{
	if (Health > 0)
	{
		if (IsValid(PassiveSkill))
		{
			UE_LOG(LogTemp, Warning, TEXT("Activating Passive%s"), *PassiveSkill->GetFName().ToString());
			PassiveSkill->BP_ActivateSkill();
			BP_SkillUsed(PassiveSkill);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Invalid passive skill"));
		}
	}
	else
	{
		PassiveSkill->DeactivateSkill();
	}
}

void APlayerCharacter::RandomizeStats()
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
		//Mesh->SetMaterial(0, DeactivatedColor);
	}
	else
	{
		SoulStatusText->SetText(FText::FromString(TEXT("Coin")));
	}

	Health = FMath::RandRange(1, 10);
	Sin = FMath::RandRange(0, 10);
	Str = FMath::RandRange(0, 10);

	PassiveSkill = NewObject<USkillBase>(this, AllPossiblePassiveSkills[FMath::RandRange(0, AllPossiblePassiveSkills.Num() - 1)]);
	PrimarySkill = NewObject<USkillBase>(this, AllPossiblePrimarySkills[FMath::RandRange(0, AllPossiblePrimarySkills.Num() - 1)]);
	PassiveSkill->Initialize(this, CombatManager);
	PrimarySkill->Initialize(this, CombatManager);

	UpdateDataText();
}

bool APlayerCharacter::Clicked(AActor* ActorToDeactivate)
{
	if (bCanBeClicked)
	{
		IActivationInterface* LastActorClicked = Cast<IActivationInterface>(ActorToDeactivate);
		APlayerCharacter* Soul = Cast<APlayerCharacter>(ActorToDeactivate);
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
		//Mesh->SetMaterial(0, ActivatedColor);
		return true;
	}
	else
	{
		return false;
	}
}

bool APlayerCharacter::DoubleClicked(AActor* ActorToDeactivate)
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

bool APlayerCharacter::Deactivate()
{
	//Mesh->SetMaterial(0, DeactivatedColor);
	return  true;
}

bool APlayerCharacter::HasCoin()
{
	return bHasCoin;
}

bool APlayerCharacter::HealthReduce(int32 Amount)
{
	if (Health > 0)
	{
		Health = FMath::Clamp(Health - Amount, 0, 10);
		DamageTaken(Amount);
		UpdateDataText();

		if (Health <= 0)
		{
			//Mesh->SetMaterial(0, ActivatedColor);
		}
		return true;
	}

	return false;
}

bool APlayerCharacter::HealthAdd(int32 Amount)
{
	if (Health > 0 && Health < 10)
	{
		Health = FMath::Clamp(Health + Amount, 0, 10);
		HealthAdded(Amount);
		UpdateDataText();

		return true;
	}
	return false;
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
			Enemy->HealthReduce(Str);
		}
	}
}

void APlayerCharacter::UpdateDataText()
{
	FString Stats = FString::Printf(TEXT("HP: %d\nSin: %d\nStr:%d\nPrimary:\n %s\n Passive:\n %s"), Health, Sin, Str, *PrimarySkill->GetSkillInfo(), *PassiveSkill->GetSkillInfo());
	StatsText->SetText(FText::FromString(Stats));
}

void APlayerCharacter::CombatInitialize(ACharacterBase* Character)
{
	GameMode = Cast<AAutoBattlerProtoGameModeBase>(GetWorld()->GetAuthGameMode());
	CombatManager = GameMode->GetCombatManager();

	//TODO Remove when not needed, debug line for adding Souls to combatmanager listenerArray when making combat level
	if (CombatManager)
	{
		CombatManager->RegisterSoulListener(this);
		CombatManager->SkillUsedDelegate.AddDynamic(this, &APlayerCharacter::ActionSkillUsed);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("CombatManager is not valid SoulCard.cpp"));
	}

	UpdateDataText();
}
