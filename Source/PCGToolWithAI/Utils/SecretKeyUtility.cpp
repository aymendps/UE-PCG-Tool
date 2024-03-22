// This capstone project was developed by Aymen Hammami - 2024


#include "SecretKeyUtility.h"

FString USecretKeyUtility::GetSecretKey(const FString& KeyName)
{
	TArray<FString> Lines;
	
	// If the file is found
	if(FFileHelper::LoadFileToStringArray(Lines, *SecretKeyFilePath))
	{
		for(const FString& Line : Lines)
		{
			// If key name is found
			if(Line.StartsWith(KeyName.TrimStartAndEnd()))
			{
				// If key value is found
				if(int32 Index; Line.FindChar('=', Index))
				{
					return Line.RightChop(Index + 1).TrimStartAndEnd();
				}
			}
		}
	} else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load secret keys file with path: %s"), *SecretKeyFilePath);
	}

	// Return an empty string if the key is not found or the file is not found
	return "";
}
