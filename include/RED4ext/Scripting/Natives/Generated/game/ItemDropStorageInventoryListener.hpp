#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct ItemDropStorageInventoryListener
{
    static constexpr const char* NAME = "gameItemDropStorageInventoryListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x50 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ItemDropStorageInventoryListener, 0x50);
} // namespace game
using gameItemDropStorageInventoryListener = game::ItemDropStorageInventoryListener;
} // namespace RED4ext

// clang-format on
