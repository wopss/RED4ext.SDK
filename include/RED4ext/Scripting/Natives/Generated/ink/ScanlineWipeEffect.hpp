#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink { 
struct ScanlineWipeEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkScanlineWipeEffect";
    static constexpr const char* ALIAS = NAME;

    float angle; // 68
    float transition; // 6C
    float width; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(ScanlineWipeEffect, 0x78);
} // namespace ink
} // namespace RED4ext
