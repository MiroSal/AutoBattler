// Copyright © 2020 by Miro Salminen

#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "SkillTypeEnums.h"
#include "SoulTrialManager.h"
#include "CharacterDataWidget.generated.h"

/**
 *
 */
UCLASS()
class AUTOBATTLERPROTO_API UCharacterDataWidget : public UUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FCharacterAttributes Attributes;

	FString GetTrialStatusAsString(ETrialStatus Status);

	void SetAttributes();

	UPROPERTY()
	class UAutoBattlerProtoGameInstance* GameInstance;

	UPROPERTY()
	class USoulTrialManager* TrialManager;

//input detection
protected:
	virtual FReply NativeOnMouseButtonDown(const FGeometry & InGeometry, const FPointerEvent & InMouseEvent) override;
	virtual void NativeOnDragDetected(const FGeometry & InGeometry, const FPointerEvent & InMouseEvent, UDragDropOperation *& OutOperation) override;
	virtual FReply NativeOnMouseButtonDoubleClick(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;	
	virtual void NativeConstruct() override;

public:
	FORCEINLINE FCharacterAttributes GetAttributes() { return Attributes; };

//Binds
protected:
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* StatusText;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* PassiveText;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* PrimaryText;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* HealthText;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* SinText;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* StrText;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class UDragWidget> DragWidgetClass;

};

