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
struct InventoryChangedEvent : red::Event
{
    static constexpr const char* NAME = "gameInventoryChangedEvent";
    static constexpr const char* ALIAS = "InventoryChangedEvent";

};
RED4EXT_ASSERT_SIZE(InventoryChangedEvent, 0x40);
} // namespace game
using gameInventoryChangedEvent = game::InventoryChangedEvent;
using InventoryChangedEvent = game::InventoryChangedEvent;
} // namespace RED4ext

// clang-format on
