// Copyright © 2020 by Miro Salminen
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SlotBase.generated.h"

UCLASS()
class AUTOBATTLERPROTO_API ASlotBase : public AActor
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Slot Data")
	class USceneComponent* Root;

	UPROPERTY(EDitDefaultsOnly, BlueprintReadOnly, Category = "Slot Data")
	class UArrowComponent* ArrowComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Slot Data")
	TSubclassOf<class ACharacterBase> CharacterClass;

private:
	UPROPERTY(VisibleInstanceOnly, Category = "Slot Data")
	class ACharacterBase* CharacterInSlot;

	UPROPERTY()
	class UAutoBattlerProtoGameInstance* GameInstance;

	UPROPERTY()
	class USoulTrialManager* TrialManager;

	UPROPERTY()
	class UCombatManager* CombatManager;

	UFUNCTION()
		void CombatEnded();

public:	
	ASlotBase();

	virtual void Tick(float DeltaSeconds) override;

	void CharacterInSlotIsDead();

//Used from/in blueprint
public:
	UFUNCTION(BlueprintCallable, Category = "SlotBase")
	virtual void RemoveCurrentCharacterFromSlot();

	UFUNCTION(BlueprintImplementableEvent, Category = "SlotBase")
	void BP_NewCharacterCreated();	
	
	UFUNCTION(BlueprintImplementableEvent, Category = "SlotBase")
	void BP_CharacterIsDead();

	UFUNCTION(BlueprintPure, Category = "SlotBase")
		ACharacterBase* GetCharacterInSlot() { return CharacterInSlot; };
};