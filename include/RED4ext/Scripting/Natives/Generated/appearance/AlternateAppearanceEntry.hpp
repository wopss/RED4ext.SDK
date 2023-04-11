#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace appearance
{
struct AlternateAppearanceEntry
{
    static constexpr const char* NAME = "appearanceAlternateAppearanceEntry";
    static constexpr const char* ALIAS = NAME;

    CName Original; // 00
    CName Alternate; // 08
    uint8_t AlternateAppearanceIndex; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(AlternateAppearanceEntry, 0x18);
} // namespace appearance
using appearanceAlternateAppearanceEntry = appearance::AlternateAppearanceEntry;
} // namespace RED4ext

// clang-format on
