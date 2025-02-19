// Copyright © 2020 by Miro Salminen

#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "Layout/Geometry.h"
#include "Blueprint/DragDropOperation.h"
#include "Input/DragAndDrop.h"
#include "Components/VerticalBox.h"
#include "Components/UniformGridPanel.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "TrialHUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class AUTOBATTLERPROTO_API UTrialHUDWidget : public UUserWidget
{
	GENERATED_BODY()

private:

	UFUNCTION()
	void Startgame();

	UPROPERTY()
		int32 FullCount;
	
protected:
	virtual bool NativeOnDrop(const FGeometry & InGeometry, const FDragDropEvent & InDragDropEvent, UDragDropOperation * InOperation) override;
	
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class UCharacterDataWidget> CharacterDataWidgetClass;

public:
	UTrialHUDWidget(const FObjectInitializer& ObjectInitializer);

	virtual bool Initialize() override;

	UCharacterDataWidget* CreateCharacterDataWidgetToTrial();

//Binds
protected:
	UPROPERTY(meta = (BindWidget))
		UVerticalBox* DropVerticalBox;

	UPROPERTY(meta = (BindWidget))
		UButton* StartButton;	
	
	UPROPERTY(meta = (BindWidget))
		UTextBlock* CountText;

	UPROPERTY(meta = (BindWidget))
		class UWrapBox* CharacterWrapBox;
};