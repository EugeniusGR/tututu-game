// Copyright Epic Games, Inc. All Rights Reserved.

#include "tututuGameMode.h"
#include "tututuCharacter.h"
#include "UObject/ConstructorHelpers.h"

AtututuGameMode::AtututuGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
