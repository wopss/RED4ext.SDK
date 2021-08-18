#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EBlurDimension.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink { 
struct BoxBlurEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkBoxBlurEffect";
    static constexpr const char* ALIAS = NAME;

    uint8_t samples; // 68
    uint8_t unk69[0x6C - 0x69]; // 69
    float intensity; // 6C
    ink::EBlurDimension blurDimension; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(BoxBlurEffect, 0x78);
} // namespace ink
} // namespace RED4ext
