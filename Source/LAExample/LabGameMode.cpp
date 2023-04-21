// Copyright Epic Games, Inc. All Rights Reserved.

#include "LabGameMode.h"
#include "LabCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALabGameMode::ALabGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/Scientist"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
