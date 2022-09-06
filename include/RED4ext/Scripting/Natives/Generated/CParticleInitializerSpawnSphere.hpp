#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleInitializer.hpp>

namespace RED4ext
{
struct IEvaluatorFloat;

struct CParticleInitializerSpawnSphere : IParticleInitializer
{
    static constexpr const char* NAME = "CParticleInitializerSpawnSphere";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorFloat> outerRadius; // 80
    Handle<IEvaluatorFloat> innerRadius; // 90
    bool surfaceOnly; // A0
    bool spawnPositiveX; // A1
    bool spawnNegativeX; // A2
    bool spawnPositiveY; // A3
    bool spawnNegativeY; // A4
    bool spawnPositiveZ; // A5
    bool spawnNegativeZ; // A6
    bool velocity; // A7
    bool worldSpace; // A8
    uint8_t unkA9[0xB0 - 0xA9]; // A9
    Handle<IEvaluatorFloat> forceScale; // B0
};
RED4EXT_ASSERT_SIZE(CParticleInitializerSpawnSphere, 0xC0);
} // namespace RED4ext

// clang-format on
