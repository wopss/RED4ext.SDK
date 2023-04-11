#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct ItemData; }

namespace game
{
struct ItemBeingRemovedEvent : red::Event
{
    static constexpr const char* NAME = "gameItemBeingRemovedEvent";
    static constexpr const char* ALIAS = "ItemBeingRemovedEvent";

    ItemID itemID; // 40
    Handle<game::ItemData> itemData; // 50
    int32_t difference; // 60
    int32_t currentQuantity; // 64
};
RED4EXT_ASSERT_SIZE(ItemBeingRemovedEvent, 0x68);
} // namespace game
using gameItemBeingRemovedEvent = game::ItemBeingRemovedEvent;
using ItemBeingRemovedEvent = game::ItemBeingRemovedEvent;
} // namespace RED4ext

// clang-format on
