// Copyright Epic Games, Inc. All Rights Reserved.

#include "GEP_1GameMode.h"
#include "GEP_1HUD.h"
#include "GEP_1Character.h"
#include "UObject/ConstructorHelpers.h"

AGEP_1GameMode::AGEP_1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGEP_1HUD::StaticClass();
}
