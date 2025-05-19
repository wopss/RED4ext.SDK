#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace physics {
enum class QueryUseCase : int16_t
{
    Default = 0,
    ActionAnimation = 1,
    AI = 2,
    AnimationComponent = 3,
    Audio = 4,
    AudioHedgehog = 5,
    Components = 6,
    Debug = 7,
    Gameplay = 8,
    GeomDescription = 9,
    LineOfSightTests = 10,
    MoveZAlignment = 11,
    Navigation = 12,
    Nodes = 13,
    PuppetBlackboardUpdater = 14,
    Ragdoll = 15,
    Scripts = 16,
    TargetingSystem = 17,
    VehicleAI = 18,
    VehicleAIColliders = 19,
    Vehicles = 20,
    VehicleChassis = 21,
    VehiclesCrowd = 22,
    VehicleWheel = 23,
    VehicleStreamingHack = 24,
    VehicleWater = 25,
    VisibilityResolver = 26,
    WorldUI = 27,
    GameEffects = 28,
    GameProjectiles = 29,
};
} // namespace physics
using physicsQueryUseCase = physics::QueryUseCase;
} // namespace RED4ext

// clang-format on
