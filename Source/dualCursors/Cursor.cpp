// Fill out your copyright notice in the Description page of Project Settings.


#include "Cursor.h"
void UCursor::updateCursorScreenPosition()
{
	
	CursorOwner = this->GetOwningPlayer();

	double X = 0;

	double Y = 0;

	int32 screenX;

	int32 screenY;

	CursorOwner->GetViewportSize(screenX,screenY);

	if ((CursorOwner->PlayerInput->GetKeyValue(EKeys::LeftMouseButton) == 1) || (CursorOwner->PlayerInput->GetKeyValue(EKeys::Gamepad_FaceButton_Right) == 1))
	{
		isClicking = true;
	}
	else
	{
		isClicking = false;
	}
	if (useControler)
	{
	  
		X = CursorOwner->PlayerInput->GetKeyValue(EKeys::Gamepad_RightX)*25;
		Y = CursorOwner->PlayerInput->GetKeyValue(EKeys::Gamepad_RightY)*25;

  
	}
	else
	{
		X = CursorOwner->PlayerInput->GetKeyValue(EKeys::MouseX)*10;
		Y = CursorOwner->PlayerInput->GetKeyValue(EKeys::MouseY)*-10;
		
	}
	if (GEngine)
	{

		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, FString::Printf(TEXT(" %f "), CursorOwner->PlayerInput->GetKeyValue(EKeys::LeftMouseButton)));

	}
	CursorOwner->PlayerInput->GetKeyValue(EKeys::LeftMouseButton);

	FWidgetTransform CurrentRenderTransform = this->GetRenderTransform();

	CursorPosition.X += X;

	CursorPosition.Y += Y;

	CursorPosition.X = CursorPosition.X > screenX ? screenX : CursorPosition.X;

	CursorPosition.Y = CursorPosition.Y > screenY ? screenY : CursorPosition.Y;

	CursorPosition.X = CursorPosition.X < 0 ? 0 : CursorPosition.X;

	CursorPosition.Y = CursorPosition.Y < 0 ? 0 : CursorPosition.Y;

	this->SetRenderTranslation(CursorPosition);

		
}


