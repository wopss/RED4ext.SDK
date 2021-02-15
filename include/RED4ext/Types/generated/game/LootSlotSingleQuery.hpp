#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/LootSlot.hpp>

namespace RED4ext
{
namespace game { 
struct LootSlotSingleQuery : game::LootSlot
{
    static constexpr const char* NAME = "gameLootSlotSingleQuery";
    static constexpr const char* ALIAS = NAME;

    TweakDBID queryTDBID; // 288
};
RED4EXT_ASSERT_SIZE(LootSlotSingleQuery, 0x290);
} // namespace game
} // namespace RED4ext
