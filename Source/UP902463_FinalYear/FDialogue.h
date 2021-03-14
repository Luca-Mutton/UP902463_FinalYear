// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "FSubtitle.h"
#include "FDialogue.generated.h"

USTRUCT(BlueprintType)
struct FDialog : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

		/*The question's excerpt - this will be shown inside our UI*/
		UPROPERTY(EditAnywhere)
		FString QuestionExcerpt;

	/*An array of the associated subtitles*/
	UPROPERTY(EditAnywhere)
		TArray<FSubtitle> Subtitles;

	/*True if we want to wait for the AI to respond*/
	UPROPERTY(EditAnywhere)
		bool bShouldAIAnswer;
};
