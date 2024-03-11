#pragma once
#include "PCGMeshSet.generated.h"

enum class EPcgMeshCategory : uint8;

USTRUCT(BlueprintType, DisplayName="PCG Mesh Set")
struct FPcgMeshSet
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EPcgMeshCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<struct FPcgMesh> Meshes;
};
