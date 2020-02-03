// Fill out your copyright notice in the Description page of Project Settings.


#include "SoulCard.h"
#include "SoulSlot.h"


void ASoulCard::Initialize(ASoulSlot* SoulSlot)
{
	CurrentSlot = SoulSlot;
	RandomizeStats();
}

ASoulSlot * ASoulCard::GetCurrentSlot()
{
	return CurrentSlot;
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
			//TEMP
			DeactivatedColor = AliveColor;
		}
		else
		{
			//TEMP
			DeactivatedColor = NoCoinColor;
		}
		SoulMesh->SetMaterial(0, DeactivatedColor);

	}

	Hp = FMath::RandRange(0, 10);
	Sin = FMath::RandRange(0, 10);
	Str = FMath::RandRange(0, 10);

}

// Sets default values
ASoulCard::ASoulCard()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ObjRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = ObjRoot;

	SoulMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SoulMesh"));
	SoulMesh->SetupAttachment(RootComponent);

}

bool ASoulCard::Activate(AActor* ActorToDeactivate)
{
	IActivationInterface* LastActorClicked = Cast<IActivationInterface>(ActorToDeactivate);

	if (bIsAlive && LastActorClicked)//if Soul is still alive and has Activationinterface so that can be clicked with mouse
	{
		LastActorClicked->Deactivate();
		CurrentSlot->CreateNewSoulToSlot();
		Destroy();
	}
	else if (!bHasCoin && LastActorClicked)//if soul has no coinand has Activationinterface so that can be clicked with mouse
	{
		ASoulCard* Soul = Cast<ASoulCard>(ActorToDeactivate);
		if (IsValid(Soul))
		{
			if (!Soul->HasCoin() && Soul != this)//if last clicked soul dont have coin and it is not this
			{
				Soul->GetCurrentSlot()->CreateNewSoulToSlot();
				ActorToDeactivate->Destroy();
				CurrentSlot->CreateNewSoulToSlot();
				//TODO do we have to destroy? can we just roll new random stats?? and move copy stats to the list thta stores wich souyls player has chosen
				this->Destroy();

			}
		}
	}

	if (LastActorClicked)//deactivates last activated actor before activating next
	{
		LastActorClicked->Deactivate();
		UE_LOG(LogTemp, Warning, TEXT("hitted"));

	}

	SoulMesh->SetMaterial(0, ActivatedColor);

	return true;
}

bool ASoulCard::Deactivate()
{
	//UE_LOG(LogTemp, Warning, TEXT("Soul %s Deactivated!!!"));
	SoulMesh->SetMaterial(0, DeactivatedColor);

	return  true;

}

bool ASoulCard::HasCoin()
{
	return bHasCoin;
}




