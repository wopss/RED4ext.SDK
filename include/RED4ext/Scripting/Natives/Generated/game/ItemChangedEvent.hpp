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
struct ItemChangedEvent : red::Event
{
    static constexpr const char* NAME = "gameItemChangedEvent";
    static constexpr const char* ALIAS = "ItemChangedEvent";

    ItemID itemID; // 40
    Handle<game::ItemData> itemData; // 50
    int32_t difference; // 60
    int32_t currentQuantity; // 64
    uint8_t unk68[0x70 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(ItemChangedEvent, 0x70);
} // namespace game
using gameItemChangedEvent = game::ItemChangedEvent;
using ItemChangedEvent = game::ItemChangedEvent;
} // namespace RED4ext

// clang-format on
