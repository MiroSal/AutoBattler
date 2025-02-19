// Copyright © 2020 by Miro Salminen

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/SizeBox.h"
#include "DragWidget.generated.h"

/**
 *Widget that is shown when dragging
 */
UCLASS()
class AUTOBATTLERPROTO_API UDragWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(meta = (BindWidget))
		USizeBox* WidgetSize;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Meta = (ExposeOnSpawn = "true"))
		UUserWidget* WidgetReference;

	virtual void NativeConstruct() override;
};
