#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/DiscreteNavigationDirection.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct NavigationOverrideEntry
{
    static constexpr const char* NAME = "inkNavigationOverrideEntry";
    static constexpr const char* ALIAS = NAME;

    ink::WidgetReference from; // 00
    ink::WidgetReference to; // 18
    ink::DiscreteNavigationDirection direction; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(NavigationOverrideEntry, 0x38);
} // namespace ink
using inkNavigationOverrideEntry = ink::NavigationOverrideEntry;
} // namespace RED4ext

// clang-format on
