// This capstone project was developed by Aymen Hammami - 2024


#include "PCGToolDataAsset.h"

TArray<FPcgMeshSet> UPcgToolDataAsset::GetMeshSetsByTheme(const EPcgTheme Theme) const
{
	// Iterate through the theme sets and return the mesh sets for the given theme
	for (const auto& Set : ThemeSets)
	{
		if(Set.Theme == Theme)
		{
			return Set.MeshSets;
		}
	}
	// Return an empty mesh set if no matching theme is found
	return TArray<FPcgMeshSet>();
}

TArray<FPcgMeshInfo> UPcgToolDataAsset::GetMeshInfoByThemeAndCategory(const EPcgTheme Theme, const EPcgMeshCategory Category) const
{
	// Find the mesh sets for the given theme and iterate through them to return the mesh info for the given category
	for (TArray<FPcgMeshSet> MeshSets = GetMeshSetsByTheme(Theme); const auto& MeshSet : MeshSets)
	{
		if(MeshSet.Category == Category)
		{
			return MeshSet.Meshes;
		}
	}

	// Return empty mesh infos if no matching category is found
	return TArray<FPcgMeshInfo>();
}
