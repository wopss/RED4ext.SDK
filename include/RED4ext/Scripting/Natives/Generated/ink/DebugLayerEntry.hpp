#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EAnchor.hpp>

namespace RED4ext
{
namespace ink { struct WidgetLibraryResource; }

namespace ink
{
struct DebugLayerEntry
{
    static constexpr const char* NAME = "inkDebugLayerEntry";
    static constexpr const char* ALIAS = NAME;

    RaRef<ink::WidgetLibraryResource> widgetResource; // 00
    ink::EAnchor anchorPlace; // 08
    uint8_t unk09[0xC - 0x9]; // 9
    Vector2 anchorPoint; // 0C
    uint8_t unk14[0x28 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(DebugLayerEntry, 0x28);
} // namespace ink
using inkDebugLayerEntry = ink::DebugLayerEntry;
} // namespace RED4ext

// clang-format on
