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

struct CParticleInitializerSize : IParticleInitializer
{
    static constexpr const char* NAME = "CParticleInitializerSize";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorVector> size; // 80
    float scale; // 90
    uint8_t unk94[0x98 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(CParticleInitializerSize, 0x98);
} // namespace RED4ext

// clang-format on
