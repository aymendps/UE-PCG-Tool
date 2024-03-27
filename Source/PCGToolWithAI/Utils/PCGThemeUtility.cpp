// This capstone project was developed by Aymen Hammami - 2024

#include "PCGThemeUtility.h"

FString UPCGThemeUtility::ThemeEnumToString(const EPcgTheme Theme)
{
	switch (Theme)
	{
		case EPcgTheme::Stylized:
			return TEXT("Stylized");
		case EPcgTheme::Northern:
			return TEXT("Northern");
		case EPcgTheme::None:
			return TEXT("None");
		default:
			return TEXT("Invalid");
	}
}

FString UPCGThemeUtility::GetThemeNamesWithIndices()
{
	FString ThemeNamesWithIndices;
	
	for (int32 Index = 0; Index < static_cast<int32>(EPcgTheme::None); ++Index)
	{
		ThemeNamesWithIndices += FString::Printf(TEXT("%d: %s | "), Index, *ThemeEnumToString(static_cast<EPcgTheme>(Index)));
	}

	return ThemeNamesWithIndices;
}
