#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events
{
struct LootedItemEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsLootedItemEvent";
    static constexpr const char* ALIAS = "UILootedItemEvent";

    ItemID itemID; // 40
};
RED4EXT_ASSERT_SIZE(LootedItemEvent, 0x50);
} // namespace game::events
using gameeventsLootedItemEvent = game::events::LootedItemEvent;
using UILootedItemEvent = game::events::LootedItemEvent;
} // namespace RED4ext

// clang-format on
