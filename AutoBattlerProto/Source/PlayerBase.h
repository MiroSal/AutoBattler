 // Copyright © 2020 by Miro Salminen
#pragma once
#include "CoreMinimal.h"
#include "CharacterBase.h"
#include "SkillTypeEnums.h"
#include "SkillBase.h"
#include "PlayerBase.generated.h"

UCLASS()
class AUTOBATTLERPROTO_API APlayerBase : public ACharacterBase
{
	GENERATED_BODY()

protected:
	virtual void OnDeath() override;

	//Called when someone uses skill
	virtual void SkillUsed(ACharacterBase* InCharacter, const ESkillType InSkillType) override;

public:
	APlayerBase();

	virtual void Initialize(ASlotBase* Slot, FCharacterAttributes InAttributes) override;

public:
	virtual void ActivatePrimarySkill() override;
	virtual void ActivatePassiveSkill() override;
	virtual void Attack() override;

	//temp stat visualization
	virtual void UpdateDataText() override;
};