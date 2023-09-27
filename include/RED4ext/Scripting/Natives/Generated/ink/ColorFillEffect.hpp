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

    float colorR; // 50
    float colorG; // 54
    float colorB; // 58
    float colorA; // 5C
    float saturation; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(ColorFillEffect, 0x68);
} // namespace ink
using inkColorFillEffect = ink::ColorFillEffect;
} // namespace RED4ext

// clang-format on
