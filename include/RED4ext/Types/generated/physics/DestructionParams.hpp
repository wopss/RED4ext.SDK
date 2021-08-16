#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/physics/SimulationType.hpp>

namespace RED4ext
{
namespace physics { 
struct DestructionParams
{
    static constexpr const char* NAME = "physicsDestructionParams";
    static constexpr const char* ALIAS = NAME;

    float debrisTimeoutMin; // 00
    float debrisTimeoutMax; // 04
    float debrisMaxSeparation; // 08
    float maxAngularVelocity; // 0C
    float fadeOutTime; // 10
    float impulseToDamage; // 14
    float contactToDamage; // 18
    float damageThreshold; // 1C
    float damageEndurance; // 20
    float bondEndurance; // 24
    float impulseChildPropagationFactor; // 28
    float impulsePropagationFactor; // 2C
    float impulseDiminishingFactor; // 30
    float maxContactImpulseRatio; // 34
    bool debrisTimeout; // 38
    bool accumulateDamage; // 39
    bool visualsRemain; // 3A
    bool startInactive; // 3B
    bool debrisDestructible; // 3C
    bool supportDamage; // 3D
    bool breakBonds; // 3E
    bool markEdgeChunks; // 3F
    bool useAggregatesForClusters; // 40
    bool turnDynamicOnImpulse; // 41
    bool buildConvexForClusters; // 42
    physics::SimulationType simulationType; // 43
};
RED4EXT_ASSERT_SIZE(DestructionParams, 0x44);
} // namespace physics
} // namespace RED4ext
