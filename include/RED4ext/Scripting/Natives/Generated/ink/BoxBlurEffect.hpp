#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EBlurDimension.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink
{
struct BoxBlurEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkBoxBlurEffect";
    static constexpr const char* ALIAS = NAME;

    uint8_t samples; // 50
    uint8_t unk51[0x54 - 0x51]; // 51
    float intensity; // 54
    ink::EBlurDimension blurDimension; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(BoxBlurEffect, 0x60);
} // namespace ink
using inkBoxBlurEffect = ink::BoxBlurEffect;
} // namespace RED4ext

// clang-format on
