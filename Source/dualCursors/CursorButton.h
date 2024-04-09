// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "CursorButton.generated.h"

/**
 * 
 */
UCLASS()
class DUALCURSORS_API UCursorButton : public UButton
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void updateButton();

	UFUNCTION(BlueprintCallable)
	void initilizeButton();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Hovered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Pressed;

	UFUNCTION(BlueprintCallable)
	void callOnHover();

	UFUNCTION(BlueprintCallable)
	void callUnHover();

	UFUNCTION(BlueprintCallable)
	void callOnPressed();

	UFUNCTION(BlueprintCallable)
	void callOnRelesed();

	/*UFUNCTION(BlueprintCallable)
	FReply callOnClicked();*/
	


	
};
