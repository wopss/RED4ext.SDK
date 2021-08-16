#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink { 
struct ColorCorrectionEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkColorCorrectionEffect";
    static constexpr const char* ALIAS = NAME;

    float brightness; // 68
    float contrast; // 6C
    float saturation; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(ColorCorrectionEffect, 0x78);
} // namespace ink
} // namespace RED4ext
