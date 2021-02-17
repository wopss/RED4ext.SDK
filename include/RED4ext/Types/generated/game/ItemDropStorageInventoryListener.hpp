#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
namespace game { 
struct ItemDropStorageInventoryListener
{
    static constexpr const char* NAME = "gameItemDropStorageInventoryListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x50 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ItemDropStorageInventoryListener, 0x50);
} // namespace game
} // namespace RED4ext
