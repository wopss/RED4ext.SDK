#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ent
{
struct LocalizationStringMapEntry
{
    static constexpr const char* NAME = "entLocalizationStringMapEntry";
    static constexpr const char* ALIAS = NAME;

    CName key; // 00
    LocalizationString string; // 08
};
RED4EXT_ASSERT_SIZE(LocalizationStringMapEntry, 0x30);
} // namespace ent
using entLocalizationStringMapEntry = ent::LocalizationStringMapEntry;
} // namespace RED4ext

// clang-format on
