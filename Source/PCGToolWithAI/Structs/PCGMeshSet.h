#pragma once
#include "PCGMeshInfo.h"
#include "PCGMeshSet.generated.h"

enum class EPcgMeshCategory : uint8;

USTRUCT(BlueprintType, DisplayName="PCG Mesh Set")
struct FPcgMeshSet
{
	GENERATED_BODY()

	// The category of the meshes, used to determine which meshes to use
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EPcgMeshCategory Category;

	// The meshes to generate and their properties for this category
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FPcgMeshInfo> Meshes;
};
