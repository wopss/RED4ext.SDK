#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink { 
struct ColorFillEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkColorFillEffect";
    static constexpr const char* ALIAS = NAME;

    float colorR; // 68
    float colorG; // 6C
    float colorB; // 70
    float colorA; // 74
    float saturation; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
};
RED4EXT_ASSERT_SIZE(ColorFillEffect, 0x80);
} // namespace ink
} // namespace RED4ext
