// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PCGToolWithAI/Structs/PCGThemeSet.h"
#include "PCGToolDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, DisplayName="PCG Tool Data Asset")
class PCGTOOLWITHAI_API UPcgToolDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FPcgThemeSet> ThemeSets;

	UFUNCTION(BlueprintPure, Category="PCG Tool Data Asset")
	TArray<FPcgMeshSet> GetMeshSetsByTheme(const EPcgTheme Theme) const;

	UFUNCTION(BlueprintPure, Category="PCG Tool Data Asset")
	TArray<FPcgMeshInfo> GetMeshInfoByThemeAndCategory(const EPcgTheme Theme, const EPcgMeshCategory Category) const;
};
	