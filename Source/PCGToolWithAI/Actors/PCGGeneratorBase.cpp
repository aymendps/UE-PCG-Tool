// This capstone project was developed by Aymen Hammami - 2024


#include "PCGGeneratorBase.h"
#include "PCGToolWithAI/Enums/PCGTheme.h"

// Sets default values
APcgGeneratorBase::APcgGeneratorBase(): Seed {0}, Theme {EPcgTheme::None}
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APcgGeneratorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APcgGeneratorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

