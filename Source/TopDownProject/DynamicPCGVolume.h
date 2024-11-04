// Copyright © 2023. BoneyardJourney. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "PCGVolume.h"
#include "DynamicPCGVolume.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNPROJECT_API ADynamicPCGVolume : public APCGVolume
{
	GENERATED_BODY()
	
public:
	void BeginPlay() override;
};
