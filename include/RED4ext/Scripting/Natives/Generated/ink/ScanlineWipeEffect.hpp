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
struct ScanlineWipeEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkScanlineWipeEffect";
    static constexpr const char* ALIAS = NAME;

    float angle; // 50
    float transition; // 54
    float width; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(ScanlineWipeEffect, 0x60);
} // namespace ink
using inkScanlineWipeEffect = ink::ScanlineWipeEffect;
} // namespace RED4ext

// clang-format on
