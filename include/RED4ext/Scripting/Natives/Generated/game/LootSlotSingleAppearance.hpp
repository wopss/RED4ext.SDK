#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/LootSlotSingleItem.hpp>

namespace RED4ext
{
namespace game { 
struct LootSlotSingleAppearance : game::LootSlotSingleItem
{
    static constexpr const char* NAME = "gameLootSlotSingleAppearance";
    static constexpr const char* ALIAS = NAME;

    CName lootAppearance; // 2A0
};
RED4EXT_ASSERT_SIZE(LootSlotSingleAppearance, 0x2A8);
} // namespace game
} // namespace RED4ext
