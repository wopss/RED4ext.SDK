#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/LootSlot.hpp>

namespace RED4ext
{
namespace game { 
struct LootSlotSingleQuery : game::LootSlot
{
    static constexpr const char* NAME = "gameLootSlotSingleQuery";
    static constexpr const char* ALIAS = NAME;

    TweakDBID queryTDBID; // 298
};
RED4EXT_ASSERT_SIZE(LootSlotSingleQuery, 0x2A0);
} // namespace game
} // namespace RED4ext
