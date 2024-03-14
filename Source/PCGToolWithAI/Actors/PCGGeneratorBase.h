// This capstone project was developed by Aymen Hammami - 2024

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PCGGeneratorBase.generated.h"

enum class EPcgTheme : uint8;

UCLASS()
class PCGTOOLWITHAI_API APcgGeneratorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APcgGeneratorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// The seed used for procedural content generation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PCG Settings",
		meta=(ExposeOnSpawn=true, ClampMin=-2147483647, ClampMax=2147483647, UIMin=-2147483647, UIMax=2147483647))
	int32 Seed;

	// The theme used for selecting the appropriate content for generation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PCG Settings", meta=(ExposeOnSpawn=true))
	EPcgTheme Theme;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Sets the seed for the generator and triggers generation. Will execute additional logic based on the generator type.
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category="PCG Settings")
	void SetSeed(int32 NewSeed);
};
