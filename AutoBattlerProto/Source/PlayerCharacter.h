 // Copyright © 2020 by Miro Salminen
#pragma once
#include "CoreMinimal.h"
#include "CharacterBase.h"
#include "SkillTypeEnums.h"
#include "SkillBase.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class AUTOBATTLERPROTO_API APlayerCharacter : public ACharacterBase
{
	GENERATED_BODY()

private:

	UPROPERTY(VisibleAnywhere)
	class UTextRenderComponent* SoulStatusText;

protected:

	virtual void SkillUsed(ACharacterBase* InCharacter, ESkillType InSkillType) override;

public:
	APlayerCharacter();

	virtual void Initialize(ASlotBase* Slot, FCharacterAttributes InAttributes) override;

public:
	virtual void ActivatePrimarySkill() override;
	virtual void ActivatePassiveSkill() override;
	virtual void Attack() override;
	virtual void UpdateDataText() override;
};