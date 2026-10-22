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

    float angle; // 60
    float transition; // 64
    float width; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(ScanlineWipeEffect, 0x70);
} // namespace ink
using inkScanlineWipeEffect = ink::ScanlineWipeEffect;
} // namespace RED4ext

// clang-format on
