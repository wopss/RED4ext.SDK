#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleInitializer.hpp>
#include <RED4ext/Scripting/Natives/Generated/Matrix.hpp>

namespace RED4ext
{
struct IEvaluatorFloat;

struct __declspec(align(0x10)) CParticleInitializerSpawnCircle : IParticleInitializer
{
    static constexpr const char* NAME = "CParticleInitializerSpawnCircle";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorFloat> outerRadius; // 80
    Handle<IEvaluatorFloat> innerRadius; // 90
    bool surfaceOnly; // A0
    bool worldSpace; // A1
    uint8_t unkA2[0xB0 - 0xA2]; // A2
    Matrix spawnToLocal; // B0
};
RED4EXT_ASSERT_SIZE(CParticleInitializerSpawnCircle, 0xF0);
} // namespace RED4ext

// clang-format on
