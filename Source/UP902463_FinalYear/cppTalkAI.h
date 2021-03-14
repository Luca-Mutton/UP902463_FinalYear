// Fill out your copyright notice in the Description page of Project Settings.

//#pragma once
//
//#include "CoreMinimal.h"
//#include "GameFramework/Actor.h"
//#include "Engine/DataTable.h"
//#include "FSubtitle.h"
//#include "UP902463_FinalYearCharacter.h"
//#include "cppTalkAI.generated.h"
//
//UCLASS()
//class UP902463_FINALYEAR_API AcppTalkAI : public AActor
//{
//	GENERATED_BODY()
//
//private:
//	UFUNCTION()
//		void OnBoxOverlap(AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex, bool bFromSweep, const FHitResult& SweepResult);
//
//	UFUNCTION()
//		void OnBoxEndOverlap(AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex);
//	
//
//public:	
//	// Sets default values for this actor's properties
//	AcppTalkAI();
//	
//	/*Answers to the character after a specified delay*/
//	void AnswerToCharacter(FName PlayerLine, TArray<FSubtitle>& SubtitlesToDisplay, float delay);
//
//	/*Retrieves the corresponding character lines*/
//	UDataTable* GetPlayerLines() { return Player_Lines; }
//
//protected:
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;
//
//	/*If the player is inside this box component he will be able to initiate a conversation with the pawn*/
//	UPROPERTY(VisibleAnywhere)
//		UBoxComponent* BoxComp;
//
//	/*The player lines - each pawn can offer different dialog options for our character*/
//	UPROPERTY(EditAnywhere, Category = DialogSystem)
//		UDataTable* Player_Lines;
//
//	/*The ai lines*/
//	UPROPERTY(EditAnywhere, Category = DialogSystem)
//		UDataTable* AI_Lines;
//
//public:	
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
//
//};
