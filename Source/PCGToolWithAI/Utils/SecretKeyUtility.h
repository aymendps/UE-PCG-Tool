// This capstone project was developed by Aymen Hammami - 2024

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SecretKeyUtility.generated.h"

/**
 * Utility class for retrieving secret keys.
 */
UCLASS()
class PCGTOOLWITHAI_API USecretKeyUtility : public UObject
{
	GENERATED_BODY()
private:
	inline static FString SecretKeyFilePath = FPaths::ProjectConfigDir() / TEXT("SecretKeys.ini");
public:
	// Finds and returns the secret key for the given key name. Returns an empty string if the key is not found.
	UFUNCTION(BlueprintPure, Category = "Secret Key Utility")
	static FString GetSecretKey(const FString& KeyName);
};
