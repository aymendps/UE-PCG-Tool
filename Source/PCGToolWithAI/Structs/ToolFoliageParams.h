#pragma once
#include "PCGToolWithAI/Enums/PCGTheme.h"
#include "ToolFoliageParams.generated.h"

USTRUCT(BlueprintType, DisplayName="Tool Foliage Params", Category="Tool Params")
struct FToolFoliageParams
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPcgTheme Theme = EPcgTheme::None;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ClampMin=0.0f, ClampMax=1.0f))
	float GroundDensity = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ClampMin=0.0f, ClampMax=1.0f))
	float TreeDensity = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ClampMin=0.0f, ClampMax=1.0f))
	float MediumFoliageDensity = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ClampMin=0.0f, ClampMax=1.0f))
	float SmallFoliageDensity = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GroundScaleMulti = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TreeScaleMulti = 1.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MediumFoliageScaleMulti = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SmallFoliageScaleMulti = 1.0f;
};
