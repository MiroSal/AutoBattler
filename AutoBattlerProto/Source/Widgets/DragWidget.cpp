// Copyright © 2020 by Miro Salminen

#include "DragWidget.h"
#include "TrialHUDWidget.h"

void UDragWidget::NativeConstruct()
{
	if (UTrialHUDWidget* TrialHUDWidget = Cast<UTrialHUDWidget>(WidgetReference))
	{
		FVector2D Size = TrialHUDWidget->GetDesiredSize();
		
		WidgetSize->SetHeightOverride(Size.Y);
		WidgetSize->SetWidthOverride(Size.X);
	}
}
