#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class ItemDisplayContext : int32_t
{
    None = 0,
    Vendor = 1,
    Tooltip = 2,
    VendorPlayer = 3,
    GearPanel = 4,
    Backpack = 5,
    DPAD_RADIAL = 6,
    Attachment = 7,
    Ripperdoc = 8,
    Crafting = 9,
};
} // namespace game
using gameItemDisplayContext = game::ItemDisplayContext;
using ItemDisplayContext = game::ItemDisplayContext;
} // namespace RED4ext

// clang-format on
