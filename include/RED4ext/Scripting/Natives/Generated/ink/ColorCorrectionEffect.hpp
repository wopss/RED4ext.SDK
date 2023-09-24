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
struct ColorCorrectionEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkColorCorrectionEffect";
    static constexpr const char* ALIAS = NAME;

    float brightness; // 50
    float contrast; // 54
    float saturation; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(ColorCorrectionEffect, 0x60);
} // namespace ink
using inkColorCorrectionEffect = ink::ColorCorrectionEffect;
} // namespace RED4ext

// clang-format on
