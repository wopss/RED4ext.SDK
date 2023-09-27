#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SharedInventoryTag.hpp>

namespace RED4ext
{
namespace game
{
struct Inventory : game::Component
{
    static constexpr const char* NAME = "gameInventory";
    static constexpr const char* ALIAS = "Inventory";

    uint8_t unkA8[0xB0 - 0xA8]; // A8
    game::SharedInventoryTag inventoryTag; // B0
    bool noInitialization; // B4
    uint8_t unkB5[0xB6 - 0xB5]; // B5
    bool saveInventory; // B6
    uint8_t unkB7[0x110 - 0xB7]; // B7
};
RED4EXT_ASSERT_SIZE(Inventory, 0x110);
} // namespace game
using gameInventory = game::Inventory;
using Inventory = game::Inventory;
} // namespace RED4ext

// clang-format on
