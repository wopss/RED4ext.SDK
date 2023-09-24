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

    float intensity; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
    float sizeX; // 58
    float sizeY; // 5C
    float offsetX; // 60
    float offsetY; // 64
};
RED4EXT_ASSERT_SIZE(GlitchEffect, 0x68);
} // namespace ink
using inkGlitchEffect = ink::GlitchEffect;
} // namespace RED4ext

// clang-format on
