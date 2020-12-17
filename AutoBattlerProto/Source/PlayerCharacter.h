 // Copyright © 2020 by Miro Salminen
#pragma once
#include "CoreMinimal.h"
#include "CharacterBase.h"
#include "SkillTypeEnums.h"
#include "SoulDataStruct.h"
#include "SkillBase.h"
#include "PlayerCharacter.generated.h"

USTRUCT()
struct FDraggableParams
{
	GENERATED_BODY()

public:
	FDraggableParams() 
	{
		bHasCoin = false;
		bIsAlive = false;
		bDraggable = false;
	};

	UPROPERTY()
		bool bHasCoin;

	UPROPERTY()
		bool bIsAlive;

	UPROPERTY()
		bool bDraggable;
};

UCLASS()
class AUTOBATTLERPROTO_API APlayerCharacter : public ACharacterBase
{
	GENERATED_BODY()

private:

	UPROPERTY(VisibleAnywhere)
	class UTextRenderComponent* SoulStatusText;

	FDraggableParams DraggableParams;

protected:

	virtual void SkillUsed(FCharacterData Data) override;

public:
	APlayerCharacter();

	virtual void Initialize(ASlotBase* Slot, bool bCanClick, FCharacterAttributes InAttributes) override;
	
	void CombatInitialize(ACharacterBase* Character);

	UFUNCTION()
	void CanClick(bool bCanClick);

public:
	virtual void ActivatePrimarySkill() override;
	virtual void ActivatePassiveSkill() override;
	virtual void Attack() override;
	virtual void UpdateDataText() override;

//Getter&&Setters
public:
	FORCEINLINE bool HasCoin() { return DraggableParams.bHasCoin; };

//IActivationInterface
public:
	virtual bool Clicked(AActor* ActorToDeactivate) override;
	virtual bool DoubleClicked(AActor* ActorToDeactivate) override;
	virtual bool Deactivate() override;
};