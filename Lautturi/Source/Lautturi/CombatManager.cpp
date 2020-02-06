// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatManager.h"

void UCombatManager::Initialize()
{

}


void UCombatManager::RegisterToListener(FSoulData Data)
{
	CombatSoulDatas.Add(Data);

	for (int32 i = 0; i < CombatSoulDatas.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("Listener Name: %s"), *CombatSoulDatas[i].SoulCard->GetFName().ToString());
	}
}
