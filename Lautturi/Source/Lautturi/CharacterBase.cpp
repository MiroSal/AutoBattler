// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"

// Sets default values
ACharacterBase::ACharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

//void ACharacterBase::Activate(ACharacterBase* Soul)
//{
//	UE_LOG(LogTemp, Warning, TEXT("Override this function!"));
//}

bool ACharacterBase::Activate(AActor* ActorToDeactivate)
{
	UE_LOG(LogTemp, Warning, TEXT("Override this function!"));

	return true;
}

bool ACharacterBase::Deactivate()
{
	UE_LOG(LogTemp, Warning, TEXT("Override this function!"));

	return true;
}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


