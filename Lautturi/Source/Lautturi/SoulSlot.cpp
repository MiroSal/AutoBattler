// Fill out your copyright notice in the Description page of Project Settings.


#include "SoulSlot.h"
#include "SoulCard.h"

// Sets default values
ASoulSlot::ASoulSlot()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASoulSlot::BeginPlay()
{
	Super::BeginPlay();
	CreateNewCharacteToSlot();
}

// Called every frame
void ASoulSlot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASoulSlot::CreateNewCharacteToSlot()
{
	//UWorld* World = GetWorld();
	//if (IsValid(World))
	//{
	//	if (SoulCardToSpawn && SoulInSlot == nullptr)
	//	{
	//		ASoulCard* NewSoul = World->SpawnActor<ASoulCard>(SoulCardToSpawn, ArrowComponent->GetComponentLocation(), FRotator::ZeroRotator);
	//		NewSoul->Initialize(this, bCreatedSoulCanBeClicked);
	//		//SoulInSlot = NewSoul;
	//	}
	//	else
	//	{
	//		UE_LOG(LogTemp, Warning, TEXT("SoulCard is not valid!!"));
	//	}
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Error, TEXT("World is not valid!!"));
	//}
}

void ASoulSlot::RemoveCharacterFromSlot(bool bDestroyCharacter)
{
	/*if (bDestroyCharacter)
	{
		SoulInSlot->Destroy();
	}
	SoulInSlot = nullptr;
	CreateNewCharacteToSlot();*/
}

