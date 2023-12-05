#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FractureFieldType.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>

namespace RED4ext
{
namespace physics
{
struct DestructionParams
{
    static constexpr const char* NAME = "physicsDestructionParams";
    static constexpr const char* ALIAS = NAME;

    float debrisTimeoutMin; // 00
    float debrisTimeoutMax; // 04
    float debrisTimeoutThreshold; // 08
    float debrisInstantRemovalThreshold; // 0C
    float debrisMaxSeparation; // 10
    float maxAngularVelocity; // 14
    float fadeOutTime; // 18
    float impulseToDamage; // 1C
    float contactToDamage; // 20
    float damageThreshold; // 24
    float damageEndurance; // 28
    float bondEndurance; // 2C
    float impulseChildPropagationFactor; // 30
    float impulsePropagationFactor; // 34
    float impulseDiminishingFactor; // 38
    float maxContactImpulseRatio; // 3C
    physics::FractureFieldType fractureFieldMask; // 40
    bool debrisTimeout; // 42
    bool accumulateDamage; // 43
    bool visualsRemain; // 44
    bool startInactive; // 45
    bool debrisDestructible; // 46
    bool supportDamage; // 47
    bool breakBonds; // 48
    bool markEdgeChunks; // 49
    bool useAggregatesForClusters; // 4A
    bool turnDynamicOnImpulse; // 4B
    bool buildConvexForClusters; // 4C
    bool enableImpulseDamage; // 4D
    physics::SimulationType simulationType; // 4E
    uint8_t unk4F[0x50 - 0x4F]; // 4F
};
RED4EXT_ASSERT_SIZE(DestructionParams, 0x50);
} // namespace physics
using physicsDestructionParams = physics::DestructionParams;
} // namespace RED4ext

// clang-format on
