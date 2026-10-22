#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink
{
struct GlitchEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkGlitchEffect";
    static constexpr const char* ALIAS = NAME;

    float intensity; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    float sizeX; // 68
    float sizeY; // 6C
    float offsetX; // 70
    float offsetY; // 74
};
RED4EXT_ASSERT_SIZE(GlitchEffect, 0x78);
} // namespace ink
using inkGlitchEffect = ink::GlitchEffect;
} // namespace RED4ext

// clang-format on
