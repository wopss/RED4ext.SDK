#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/LootObject.hpp>

namespace RED4ext
{
namespace game { 
struct ItemDropObject : game::LootObject
{
    static constexpr const char* NAME = "gameItemDropObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk280[0x2D8 - 0x280]; // 280
};
RED4EXT_ASSERT_SIZE(ItemDropObject, 0x2D8);
} // namespace game
} // namespace RED4ext
