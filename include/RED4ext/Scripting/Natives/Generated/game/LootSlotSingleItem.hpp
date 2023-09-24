#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/LootSlot.hpp>

namespace RED4ext
{
namespace game
{
struct LootSlotSingleItem : game::LootSlot
{
    static constexpr const char* NAME = "gameLootSlotSingleItem";
    static constexpr const char* ALIAS = NAME;

    TweakDBID itemTDBID; // 2A0
};
RED4EXT_ASSERT_SIZE(LootSlotSingleItem, 0x2A8);
} // namespace game
using gameLootSlotSingleItem = game::LootSlotSingleItem;
} // namespace RED4ext

// clang-format on
