// Copyright © 2020 by Miro Salminen
#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SoulTrialManager.h"
#include "CombatManager.h"
#include "AutoBattlerProtoGameInstance.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndCombatDelegate);


UCLASS()
class AUTOBATTLERPROTO_API UAutoBattlerProtoGameInstance : public UGameInstance
{
	GENERATED_BODY()

private:
	UPROPERTY()
	USoulTrialManager* SoulTrialManager;

	UPROPERTY()
	UCombatManager* CombatManager;

protected:

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<USoulTrialManager> SoulTrialManagerClass;

	virtual void OnStart() override;

public:
	UAutoBattlerProtoGameInstance();

	virtual void Init() override;

	FEndCombatDelegate EndCombatDelegate;

	void EndCombat();

//Getters&&Setters
public:
	
	UFUNCTION(BlueprintPure)
	USoulTrialManager* GetSoulTrialManager() { return SoulTrialManager; };
	
	UFUNCTION(BlueprintPure)
	FORCEINLINE UCombatManager* GetCombatManager() { return CombatManager; };
};