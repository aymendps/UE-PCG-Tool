// This capstone project was developed by Aymen Hammami - 2024


#include "ToolParamsParser.h"

FToolBaseParams UToolParamsParser::ParseToolBaseParams(const FString& ParamsString)
{
	// Convert ParamsString to a JSON object, since it's in that shape when received from the OpenAI API
	UE_LOG(LogTemp, Log, TEXT("Trying to parse tool base params with the following:\n%s"), *ParamsString);
	TSharedPtr<FJsonObject> JsonObject;
	const TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(ParamsString);

	// Get the params from the JSON object and return them as a struct
	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{
		FToolBaseParams Params;
		Params.NumberOfRequirements = 0;
		Params.bRequiresFoliage = JsonObject->GetBoolField(TEXT("requiresFoliage"));
		Params.NumberOfRequirements += Params.bRequiresFoliage ? 1 : 0;
		Params.bRequiresHouse = JsonObject->GetBoolField(TEXT("requiresHouse"));
		Params.NumberOfRequirements += Params.bRequiresHouse ? 1 : 0;
		Params.bRequiresRiver = JsonObject->GetBoolField(TEXT("requiresRiver"));
		Params.NumberOfRequirements += Params.bRequiresRiver ? 1 : 0;
		
		UE_LOG(LogTemp, Log, TEXT("Successfully parsed ToolBaseParams"));
		return Params;
	}

	// If the JSON object is invalid, log an error and return an empty struct
	UE_LOG(LogTemp, Error, TEXT("Failed to parse ToolBaseParams JSON string"));
	return FToolBaseParams();
}

FToolFoliageParams UToolParamsParser::ParseToolFoliageParams(const FString& ParamsString)
{
	// Convert ParamsString to a JSON object, since it's in that shape when received from the OpenAI API
	UE_LOG(LogTemp, Log, TEXT("Trying to parse tool foliage params with the following:\n%s"), *ParamsString);
	TSharedPtr<FJsonObject> JsonObject;
	const TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(ParamsString);

	// Get the params from the JSON object and return them as a struct
	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{
		FToolFoliageParams Params;
		
		// Check if the theme index is within the valid range, and set the theme enum accordingly
		// Using None since it's the last element in the enum
		const int32 ThemeIndex = JsonObject->GetIntegerField(TEXT("theme"));
		if (ThemeIndex >= 0 && ThemeIndex < static_cast<int32>(EPcgTheme::None))
		{
			Params.Theme = static_cast<EPcgTheme>(ThemeIndex);
		}
		else
		{
			Params.Theme = EPcgTheme::None;
		}
		
		// Set the density params
		Params.GroundDensity = JsonObject->GetNumberField(TEXT("groundDensity"));
		Params.TreeDensity = JsonObject->GetNumberField(TEXT("treeDensity"));
		Params.MediumFoliageDensity = JsonObject->GetNumberField(TEXT("mediumFoliageDensity"));
		Params.SmallFoliageDensity = JsonObject->GetNumberField(TEXT("smallFoliageDensity"));

		// Set the scale multipliers params
		Params.GroundScaleMulti = JsonObject->GetNumberField(TEXT("groundScale"));
		Params.TreeScaleMulti = JsonObject->GetNumberField(TEXT("treeScale"));
		Params.MediumFoliageScaleMulti = JsonObject->GetNumberField(TEXT("mediumFoliageScale"));
		Params.SmallFoliageScaleMulti = JsonObject->GetNumberField(TEXT("smallFoliageScale"));

		UE_LOG(LogTemp, Log, TEXT("Successfully parsed ToolFoliageParams"));
		return Params;
	}

	// If the JSON object is invalid, log an error and return an empty struct
	UE_LOG(LogTemp, Error, TEXT("Failed to parse ToolFoliageParams JSON string"));
	return FToolFoliageParams();
}
