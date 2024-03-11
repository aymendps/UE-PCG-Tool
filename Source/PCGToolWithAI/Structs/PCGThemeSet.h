#pragma once
#include "PCGMeshSet.h"
#include "PCGThemeSet.generated.h"

enum class EPcgTheme : uint8;

USTRUCT(BlueprintType, DisplayName="PCG Theme Set")
struct FPcgThemeSet
{
	GENERATED_BODY()

	// The theme of the mesh sets, used to determine which mesh sets to use
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EPcgTheme Theme;

	// The mesh sets to use for this theme
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FPcgMeshSet> MeshSets;
};
