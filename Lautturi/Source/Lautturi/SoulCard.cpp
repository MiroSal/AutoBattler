// Fill out your copyright notice in the Description page of Project Settings.


#include "SoulCard.h"

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
	IActivationInterface* ActivationInterface = Cast<IActivationInterface>(ActorToDeactivate);

	if (bIsAlive && ActivationInterface)
	{
		ActivationInterface->Deactivate();
		Destroy();
	}
	else if (bHasCoin)
	{
		ASoulCard* Soul = Cast<ASoulCard>(ActorToDeactivate);
		if (IsValid(Soul))
		{
			if (Soul->HasCoin())
			{
				ActorToDeactivate->Destroy();
				this->Destroy();
			}
		}
	}

	if (ActivationInterface)
	{
		ActivationInterface->Deactivate();
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



