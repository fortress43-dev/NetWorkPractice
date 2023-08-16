// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetWorkPracticeGameMode.h"
#include "NetWorkPracticeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANetWorkPracticeGameMode::ANetWorkPracticeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
