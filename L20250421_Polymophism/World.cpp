#include "World.h"
#include "Actor.h"

UWorld::UWorld()
{
}

UWorld::~UWorld()
{
}

void UWorld::Run()
{
	
		for (auto Actor : Actors)
		{
			Actor->Tick();
		}

}

void UWorld::SpawnActor(AActor* SpawnedActor)
{
	Actors.push_back(SpawnedActor);
}
