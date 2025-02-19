// Copyright © 2020 by Miro Salminen
#pragma once
#include "CoreMinimal.h"
#include "CharacterBase.h"
#include "EnemyBase.generated.h"

UCLASS()
class AUTOBATTLERPROTO_API AEnemyBase : public ACharacterBase
{
	GENERATED_BODY()

private:	

	//temp stat visualization
	UPROPERTY(VisibleAnywhere)
	class UTextRenderComponent* EnemyCountText;

	//temp variable to count enemies
	UPROPERTY()
	int32 EnemyCount;

protected:
	virtual void OnDeath() override;

	//Called when someone uses skill
	void SkillUsed(ACharacterBase* InCharacter, const ESkillType InSkillType) override;

public:
	AEnemyBase();

	virtual void Initialize(ASlotBase* Slot, FCharacterAttributes InAttributes) override;

public:
	virtual void ActivatePrimarySkill() override;
	virtual void ActivatePassiveSkill() override;
	virtual void Attack() override;

	//temp stat visualization
	virtual void UpdateDataText() override;
};