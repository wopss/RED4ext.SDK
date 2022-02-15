#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FractureFieldType.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>

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
    physics::FractureFieldType fractureFieldMask; // 38
    bool debrisTimeout; // 3A
    bool accumulateDamage; // 3B
    bool visualsRemain; // 3C
    bool startInactive; // 3D
    bool debrisDestructible; // 3E
    bool supportDamage; // 3F
    bool breakBonds; // 40
    bool markEdgeChunks; // 41
    bool useAggregatesForClusters; // 42
    bool turnDynamicOnImpulse; // 43
    bool buildConvexForClusters; // 44
    physics::SimulationType simulationType; // 45
    uint8_t unk46[0x48 - 0x46]; // 46
};
RED4EXT_ASSERT_SIZE(DestructionParams, 0x48);
} // namespace physics
} // namespace RED4ext
