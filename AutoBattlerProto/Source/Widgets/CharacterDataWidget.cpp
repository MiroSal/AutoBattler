// Copyright © 2020 by Miro Salminen

#include "CharacterDataWidget.h"
#include "DragWidget.h"
#include "Layout/Geometry.h"
#include "Blueprint/DragDropOperation.h"
#include "Input/DragAndDrop.h"
#include "Input/Events.h"
#include "InputCoreTypes.h"
#include "Templates/SharedPointer.h"
#include "Components/Widget.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "SkillBase.h"
#include "Engine/UserDefinedEnum.h"
#include "Widgets\TrialHUDWidget.h"
#include "Engine/World.h"
#include "AutoBattlerProtoGameModeBase.h"
#include "AutoBattlerProtoGameInstance.h"

void UCharacterDataWidget::NativeConstruct()
{
	Super::NativeConstruct();
	check(IsValid(GetWorld()));

	GameInstance = Cast<UAutoBattlerProtoGameInstance>(GetWorld()->GetGameInstance());
	check(IsValid(GameInstance));

	TrialManager = GameInstance->GetSoulTrialManager();
	check(IsValid(TrialManager));

	Attributes = TrialManager->GetRandomizedCharacterAttributes();
	SetAttributes();
}

//Activate pressed or start dragging
FReply UCharacterDataWidget::NativeOnMouseButtonDown(const FGeometry & InGeometry, const FPointerEvent & InMouseEvent)
{
	Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);

	if (ensure(IsValid(TrialManager)))
		TrialManager->SetActiveCharacterWidget(this);

	return FReply::Handled().DetectDrag(UWidget::TakeWidget(), EKeys::LeftMouseButton);
}

//if doubleslicked remove from trial if status is Alive
FReply UCharacterDataWidget::NativeOnMouseButtonDoubleClick(const FGeometry & InGeometry, const FPointerEvent & InMouseEvent)
{
	Super::NativeOnMouseButtonDoubleClick(InGeometry, InMouseEvent);

	if (GetAttributes().TrialStatus == ETrialStatus::TS_Alive)
	{
		if (ensure(IsValid(TrialManager)))
		{
			UTrialHUDWidget* HUDWidget = TrialManager->GetTrialHUDWidget();

			if (IsValid(HUDWidget))
			{
				HUDWidget->CreateCharacterDataWidgetToTrial();
			}
			this->RemoveFromViewport();
		}
	}

	return FReply::Handled();
}

//Drag and add to chosen players if succeeded
void UCharacterDataWidget::NativeOnDragDetected(const FGeometry & InGeometry, const FPointerEvent & InMouseEvent, UDragDropOperation *& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);

	UDragDropOperation* DragOperation = Cast<UDragDropOperation>(UWidgetBlueprintLibrary::CreateDragDropOperation(UDragDropOperation::StaticClass()));
	if (ensure(IsValid(DragOperation)))
	{
		DragOperation->DefaultDragVisual = this;
		DragOperation->Pivot = EDragPivot::MouseDown;
		DragOperation->Payload = this;

		OutOperation = DragOperation;
	}
}

void UCharacterDataWidget::SetAttributes()
{
	StatusText->SetText(FText::FromString(GetTrialStatusAsString(Attributes.TrialStatus)));
	HealthText->SetText(FText::FromString(FString::Printf(TEXT("HP: %d"), Attributes.Health)));
	StrText->SetText(FText::FromString(FString::Printf(TEXT("Str: %d"), Attributes.Str)));
	SinText->SetText(FText::FromString(FString::Printf(TEXT("Sin: %d"), Attributes.Sin)));

	USkillBase* primary = Cast<USkillBase>(Attributes.PrimarySkill.GetDefaultObject());
	if (IsValid(primary))
		PrimaryText->SetText(FText::FromString(FString::Printf(TEXT("Primary: %s"), *primary->GetSkillInfo())));

	USkillBase* passive = Cast<USkillBase>(Attributes.PassiveSkill.GetDefaultObject());
	if (IsValid(passive))
		PassiveText->SetText(FText::FromString(FString::Printf(TEXT("Passive: %s"), *passive->GetSkillInfo())));
}

FString UCharacterDataWidget::GetTrialStatusAsString(ETrialStatus Status)
{
	switch (Status)
	{
	case ETrialStatus::TS_HasCoin:
		return TEXT("Coin");
		break;
	case ETrialStatus::TS_NoCoin:
		return TEXT("No Coin");
		break;
	case ETrialStatus::TS_Alive:
		return TEXT("Alive");
		break;
	case ETrialStatus::TS_None:
		return TEXT("None");
		break;
	default:
		break;
	}

	return FString();
}