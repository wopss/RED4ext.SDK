#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleInitializer.hpp>

namespace RED4ext
{
struct IEvaluatorVector;

struct CParticleInitializerSpawnBox : IParticleInitializer
{
    static constexpr const char* NAME = "CParticleInitializerSpawnBox";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorVector> extents; // 80
    bool worldSpace; // 90
    bool surfaceOnly; // 91
    uint8_t unk92[0x98 - 0x92]; // 92
};
RED4EXT_ASSERT_SIZE(CParticleInitializerSpawnBox, 0x98);
} // namespace RED4ext

// clang-format on
