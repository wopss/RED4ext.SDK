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
struct ItemAddedEvent : red::Event
{
    static constexpr const char* NAME = "gameItemAddedEvent";
    static constexpr const char* ALIAS = "ItemAddedEvent";

    ItemID itemID; // 40
    Handle<game::ItemData> itemData; // 50
    int32_t currentQuantity; // 60
    bool flaggedAsSilent; // 64
    uint8_t unk65[0x68 - 0x65]; // 65
};
RED4EXT_ASSERT_SIZE(ItemAddedEvent, 0x68);
} // namespace game
using gameItemAddedEvent = game::ItemAddedEvent;
using ItemAddedEvent = game::ItemAddedEvent;
} // namespace RED4ext

// clang-format on
