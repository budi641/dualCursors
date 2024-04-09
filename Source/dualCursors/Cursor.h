// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Cursor.generated.h"

/**
 * 
 */
UCLASS()
class DUALCURSORS_API UCursor : public UUserWidget  
{
	GENERATED_BODY()

public:

	APlayerController* CursorOwner;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D CursorPosition;

	UFUNCTION(BlueprintCallable)
	void updateCursorScreenPosition();

	UPROPERTY(EditAnywhere, BlueprintReadWrite) 
	bool useControler;


	UPROPERTY(EditAnywhere, meta =(BindWidget), BlueprintReadWrite)
	class UImage* Cursor_Image;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isHoveringOverButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isClicking;


};
