#pragma once
#include "ToolBaseParams.generated.h"

USTRUCT(BlueprintType, DisplayName="Tool Base Params", Category="Tool Params")
struct FToolBaseParams
{
	GENERATED_BODY()

	// How many generators the tool requires
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumberOfRequirements = 0;

	// Whether the tool should generate foliage or not
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRequiresFoliage = false;

	// Whether the tool should generate a house or not
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRequiresHouse = false;

	// Whether the tool should generate a river or not
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRequiresRiver = false;
};
