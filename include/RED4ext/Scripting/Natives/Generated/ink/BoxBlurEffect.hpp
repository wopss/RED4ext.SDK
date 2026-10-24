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

    uint8_t samples; // 60
    uint8_t unk61[0x64 - 0x61]; // 61
    float intensity; // 64
    ink::EBlurDimension blurDimension; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(BoxBlurEffect, 0x70);
} // namespace ink
using inkBoxBlurEffect = ink::BoxBlurEffect;
} // namespace RED4ext

// clang-format on
