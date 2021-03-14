// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "NPCHUD.generated.h"

/**
 * 
 */
struct Message
{
	FString message;
	float time;
	FColor color;
	Message()
	{
		// Set the default time.
		time = 5.f;
		color = FColor::White;
	}
	Message(FString iMessage, float iTime, FColor iColor)
	{
		message = iMessage;
		time = iTime;
		color = iColor;
	}
};

UCLASS()
class UP902463_FINALYEAR_API ANPCHUD : public AHUD
{
	GENERATED_BODY()
	
		// The font used to render the text in the HUD.
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUDFont)
		class UFont* hudFont;

	// Add this function to be able to draw to the HUD!
	virtual void DrawHUD() override;
};
