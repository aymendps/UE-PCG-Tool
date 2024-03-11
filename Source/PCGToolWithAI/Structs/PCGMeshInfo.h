#pragma once
#include "PCGMeshInfo.generated.h"

USTRUCT(BlueprintType, DisplayName="PCG Mesh Info")
struct FPcgMeshInfo
{
	GENERATED_BODY()

	// The mesh to generate
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMesh* Mesh;

	// The minimum scale of the mesh to generate
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinScale = 1.0f;

	// The maximum scale of the mesh to generate
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MaxScale = 1.0f;
};
