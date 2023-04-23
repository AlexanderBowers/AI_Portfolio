// Copyright Epic Games, Inc. All Rights Reserved.

#include "AI_PortfolioGameMode.h"
#include "AI_PortfolioCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAI_PortfolioGameMode::AAI_PortfolioGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
