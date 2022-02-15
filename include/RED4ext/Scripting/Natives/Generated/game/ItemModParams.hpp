#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game { 
struct ItemModParams
{
    static constexpr const char* NAME = "gameItemModParams";
    static constexpr const char* ALIAS = "ItemModParams";

    uint8_t unk00[0x8 - 0x0]; // 0
    ItemID itemID; // 08
    int32_t quantity; // 18
    uint8_t unk1C[0x50 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(ItemModParams, 0x50);
} // namespace game
using ItemModParams = game::ItemModParams;
} // namespace RED4ext
