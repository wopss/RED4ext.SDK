#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BinkLanguageDescriptor.hpp>

namespace RED4ext
{
namespace ink
{
struct LocalizedBink
{
    static constexpr const char* NAME = "inkLocalizedBink";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::BinkLanguageDescriptor> binks; // 00
    uint8_t unk10[0x18 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(LocalizedBink, 0x18);
} // namespace ink
using inkLocalizedBink = ink::LocalizedBink;
} // namespace RED4ext

// clang-format on
