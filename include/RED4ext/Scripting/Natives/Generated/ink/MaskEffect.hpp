#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink { 
struct MaskEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkMaskEffect";
    static constexpr const char* ALIAS = NAME;

    float angle; // 68
    float opacity; // 6C
    bool invert; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(MaskEffect, 0x78);
} // namespace ink
} // namespace RED4ext
