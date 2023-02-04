// Fill out your copyright notice in the Description page of Project Settings.

#include "MyDPICustomScalingRule.h"

float UMyDPICustomScalingRule::GetDPIScaleBasedOnSize(FIntPoint Size) const
{
#if PLATFORM_WINDOWS
    if (Size.X > 0 && Size.Y > 0)
    {
        float ax = Size.X / 1920.f;
        float ay = Size.Y / 1080.f;

        return FMath::Min(ax, ay);
    }
#endif
    return 1.f;
}