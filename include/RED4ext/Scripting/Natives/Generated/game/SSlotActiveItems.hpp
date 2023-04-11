#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct SSlotActiveItems
{
    static constexpr const char* NAME = "gameSSlotActiveItems";
    static constexpr const char* ALIAS = "SSlotActiveItems";

    ItemID rightHandItem; // 00
    ItemID leftHandItem; // 10
};
RED4EXT_ASSERT_SIZE(SSlotActiveItems, 0x20);
} // namespace game
using gameSSlotActiveItems = game::SSlotActiveItems;
using SSlotActiveItems = game::SSlotActiveItems;
} // namespace RED4ext

// clang-format on
