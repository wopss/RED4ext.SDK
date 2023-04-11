#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct ItemEventsRemoveActiveItem : red::Event
{
    static constexpr const char* NAME = "gameItemEventsRemoveActiveItem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ItemEventsRemoveActiveItem, 0x50);
} // namespace game
using gameItemEventsRemoveActiveItem = game::ItemEventsRemoveActiveItem;
} // namespace RED4ext

// clang-format on
