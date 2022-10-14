// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClashGameMode.h"
#include "ClashCharacter.h"
#include "UObject/ConstructorHelpers.h"

AClashGameMode::AClashGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
