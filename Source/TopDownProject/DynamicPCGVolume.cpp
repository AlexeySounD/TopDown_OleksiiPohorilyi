// Copyright © 2023. BoneyardJourney. All rights reserved.


#include "DynamicPCGVolume.h"

#include "PCGComponent.h"

void ADynamicPCGVolume::BeginPlay()
{
	Super::BeginPlay();
	if (PCGComponent)
	{
		PCGComponent->Seed = FMath::Rand32();
	}
}
