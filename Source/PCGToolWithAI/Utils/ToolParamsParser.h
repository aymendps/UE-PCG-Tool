// This capstone project was developed by Aymen Hammami - 2024

#pragma once

#include "CoreMinimal.h"
#include "PCGToolWithAI/Structs/ToolBaseParams.h"
#include "PCGToolWithAI/Structs/ToolFoliageParams.h"
#include "UObject/Object.h"
#include "ToolParamsParser.generated.h"
/**
 * Utility class for parsing the tool params from strings received from the OpenAI API.
 */
UCLASS()
class PCGTOOLWITHAI_API UToolParamsParser : public UObject
{
	GENERATED_BODY()

public:
	// Parse the tool's base params received from the OpenAI API and return a struct with the parsed values
	UFUNCTION(BlueprintCallable, Category = "PCG Tool Params")
	static FToolBaseParams ParseToolBaseParams(const FString& ParamsString);

	// Parse the tool's foliage params received from the OpenAI API and return a struct with the parsed values
	UFUNCTION(BlueprintCallable, Category = "PCG Tool Params")
	static FToolFoliageParams ParseToolFoliageParams(const FString& ParamsString);
};
