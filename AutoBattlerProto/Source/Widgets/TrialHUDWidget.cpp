// Copyright © 2020 by Miro Salminen

#include "TrialHUDWidget.h"
#include "DragWidget.h"
#include "CharacterDataWidget.h"
#include "SoulTrialManager.h"
#include "CombatManager.h"
#include "AutoBattlerProtoGameModeBase.h"
#include "Components/WrapBox.h"
#include "Kismet/GameplayStatics.h"

#define MAX_SOULTRIALCHARACTERS 9
#define MAX_COMBATCHARACTERS 5

UTrialHUDWidget::UTrialHUDWidget(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{
	FullCount = 0;
}

bool UTrialHUDWidget::Initialize()
{
	Super::Initialize();

	//create datawidgets to trial
	for (size_t i = 0; i < MAX_SOULTRIALCHARACTERS; i++)
	{
		UCharacterDataWidget* Widget = CreateWidget<UCharacterDataWidget>(this, CharacterDataWidgetClass);
		if (ensure(IsValid(Widget)))
		{
			Widget->AddToViewport();
			Widget->SetVisibility(ESlateVisibility::Visible);
			CharacterWrapBox->AddChildToWrapBox(Widget);
		}
	}

	CountText->SetText(FText::FromString("0/5"));

	if (!ensure(StartButton != nullptr)) return false;
	StartButton->OnClicked.AddDynamic(this, &UTrialHUDWidget::Startgame);
	return true;
}

bool UTrialHUDWidget::NativeOnDrop(const FGeometry & InGeometry, const FDragDropEvent & InDragDropEvent, UDragDropOperation * InOperation)
{
	Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);

	if (FullCount < MAX_COMBATCHARACTERS)
	{
		UCharacterDataWidget* DraggedWidget = Cast<UCharacterDataWidget>(InOperation->Payload);

		if (IsValid(DraggedWidget))
		{
			FVector2D Location = InGeometry.AbsoluteToLocal(InDragDropEvent.GetScreenSpacePosition());

			DraggedWidget->SetVisibility(ESlateVisibility::HitTestInvisible);
			DraggedWidget->RemoveFromParent();
			DraggedWidget->AddToViewport();
			DropVerticalBox->AddChildToVerticalBox(DraggedWidget);

			check(IsValid(GetWorld()));

			UAutoBattlerProtoGameInstance* GameInstance = Cast<UAutoBattlerProtoGameInstance>(GetWorld()->GetGameInstance());
			check(IsValid(GameInstance));

			USoulTrialManager* TrialManager = GameInstance->GetSoulTrialManager();
			check(IsValid(TrialManager));

			TrialManager->SetActiveCharacterWidget(nullptr);

			TrialManager->AddSelectedCharacterAttributes(DraggedWidget->GetAttributes());
			FullCount++;
			CountText->SetText(FText::FromString(FString::Printf(TEXT("%d/%d"), FullCount, MAX_COMBATCHARACTERS)));

			//create new widget to replace chosen widget
			CreateCharacterDataWidgetToTrial();

			//When ready
			if (FullCount >= MAX_COMBATCHARACTERS)
			{
				StartButton->SetIsEnabled(true);
				StartButton->SetRenderOpacity(1);
				StartButton->SetVisibility(ESlateVisibility::Visible);
				CharacterWrapBox->ClearChildren();
			}
		}
	}
	return false;
}

UCharacterDataWidget* UTrialHUDWidget::CreateCharacterDataWidgetToTrial()
{
	UCharacterDataWidget* Widget = CreateWidget<UCharacterDataWidget>(this, CharacterDataWidgetClass);
	if (IsValid(Widget) && IsValid(CharacterWrapBox))
	{
		Widget->SetVisibility(ESlateVisibility::Visible);
		CharacterWrapBox->AddChildToWrapBox(Widget);
		return Widget;
	}
	return nullptr;
}

void UTrialHUDWidget::Startgame()
{
	FLatentActionInfo info;
	UGameplayStatics::LoadStreamLevel(this, "CombatLevel", true, true, info);
	UGameplayStatics::UnloadStreamLevel(this, "PickingLevel", info, false);

	this->RemoveFromViewport();
}