#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ui/EntryVisibility.hpp>

namespace RED4ext
{
namespace quest
{
struct HUDEntryVisibilityData
{
    static constexpr const char* NAME = "questHUDEntryVisibilityData";
    static constexpr const char* ALIAS = NAME;

    CName hudEntryName; // 00
    world::ui::EntryVisibility visibility; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(HUDEntryVisibilityData, 0x10);
} // namespace quest
using questHUDEntryVisibilityData = quest::HUDEntryVisibilityData;
} // namespace RED4ext

// clang-format on
