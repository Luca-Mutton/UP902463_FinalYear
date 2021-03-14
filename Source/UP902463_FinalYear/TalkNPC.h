// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TalkNPC.generated.h"

UCLASS()
class UP902463_FINALYEAR_API ATalkNPC : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATalkNPC();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Collision)
		class USphereComponent* ProxSphere;
	// This is the NPC's message that he has to tell us.

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = NPCMessage)
		FString NpcMessage;
	// When you create a blueprint from this class, you want to be 
	// able to edit that message in blueprints,
	// that's why we have the EditAnywhere and BlueprintReadWrite 
	// properties.

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
