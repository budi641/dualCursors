// Fill out your copyright notice in the Description page of Project Settings.


#include "CursorButton.h"
#include <Blueprint/WidgetBlueprintLibrary.h>
#include "Cursor.h"
#include "Input/Reply.h"

void UCursorButton::updateButton()
{
    
    TArray< UUserWidget* > CursorWidgets;
    TSubclassOf< UCursor > WidgetClass;
	UWidgetBlueprintLibrary::GetAllWidgetsOfClass(GetWorld(), CursorWidgets, WidgetClass, true);
    
    

}

void UCursorButton::initilizeButton()
{

}

void UCursorButton::callOnHover()
{
    Hovered = true;

    OnHovered.Broadcast();
}

void UCursorButton::callUnHover()
{
    Hovered = false;

    OnUnhovered.Broadcast();
}

void UCursorButton::callOnPressed()
{
    Pressed = true;

    OnPressed.Broadcast();
}

void UCursorButton::callOnRelesed()
{
    Pressed = false;

    OnReleased.Broadcast();
}

//FReply UCursorButton::callOnClicked()
//{
//    OnClicked.Broadcast();
//
//    return FReply::Handled();
//}
