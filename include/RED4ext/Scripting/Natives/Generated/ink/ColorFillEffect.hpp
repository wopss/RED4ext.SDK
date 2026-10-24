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
struct ColorFillEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkColorFillEffect";
    static constexpr const char* ALIAS = NAME;

    float colorR; // 60
    float colorG; // 64
    float colorB; // 68
    float colorA; // 6C
    float saturation; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(ColorFillEffect, 0x78);
} // namespace ink
using inkColorFillEffect = ink::ColorFillEffect;
} // namespace RED4ext

// clang-format on
