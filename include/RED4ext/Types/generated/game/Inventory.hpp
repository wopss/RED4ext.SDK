#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/Component.hpp>
#include <RED4ext/Types/generated/game/SharedInventoryTag.hpp>

namespace RED4ext
{
namespace game { 
struct Inventory : game::Component
{
    static constexpr const char* NAME = "gameInventory";
    static constexpr const char* ALIAS = "Inventory";

    uint8_t unkA8[0xC0 - 0xA8]; // A8
    game::SharedInventoryTag inventoryTag; // C0
    bool noInitialization; // C4
    uint8_t unkC5[0xC6 - 0xC5]; // C5
    bool saveInventory; // C6
    uint8_t unkC7[0x128 - 0xC7]; // C7
};
RED4EXT_ASSERT_SIZE(Inventory, 0x128);
} // namespace game
using Inventory = game::Inventory;
} // namespace RED4ext
