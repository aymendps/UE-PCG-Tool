#pragma once
#include "PCGMesh.generated.h"

USTRUCT(BlueprintType, DisplayName="PCG Mesh")
struct FPcgMesh
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMesh* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinScale = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MaxScale = 1.0f;
};
