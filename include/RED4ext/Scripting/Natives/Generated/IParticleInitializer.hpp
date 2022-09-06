#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleModule.hpp>

namespace RED4ext
{
struct IParticleInitializer : IParticleModule
{
    static constexpr const char* NAME = "IParticleInitializer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x7C - 0x78]; // 78
    uint32_t seed; // 7C
};
RED4EXT_ASSERT_SIZE(IParticleInitializer, 0x80);
} // namespace RED4ext

// clang-format on
