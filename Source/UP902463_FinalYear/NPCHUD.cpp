// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCHUD.h"

void ANPCHUD::DrawHUD()
{
	// call superclass DrawHUD() function first
	Super::DrawHUD();
	// then proceed to draw your stuff.
	// we can draw lines..
	DrawLine(200, 300, 400, 500, FLinearColor::Blue);

	// and we can draw text!
	DrawText("Greetings from Unreal!", FVector2D(0, 0), hudFont, FVector2D(1, 1), FColor::White);
}
