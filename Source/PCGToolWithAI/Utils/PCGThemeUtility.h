// This capstone project was developed by Aymen Hammami - 2024

#pragma once

#include "CoreMinimal.h"
#include "PCGToolWithAI/Enums/PCGTheme.h"
#include "UObject/Object.h"
#include "PCGThemeUtility.generated.h"

/**
 * Utility class for converting the PCG theme enum to string
 */
UCLASS()
class PCGTOOLWITHAI_API UPCGThemeUtility : public UObject
{
	GENERATED_BODY()

public:
	// Convert the PCG theme enum to a string
	UFUNCTION(BlueprintPure, Category = "PCG Theme Utility")
	static FString ThemeEnumToString(const EPcgTheme Theme);

	// Return all PCG theme enum elements with their corresponding indices in a single string
	UFUNCTION(BlueprintPure, Category = "PCG Theme Utility")
	static FString GetThemeNamesWithIndices();
};
