#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/LootContainerBase.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/LootSlotState.hpp>

namespace RED4ext
{
namespace game
{
struct LootSlot : game::LootContainerBase
{
    static constexpr const char* NAME = "gameLootSlot";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk268[0x290 - 0x268]; // 268
    float dropChance; // 290
    bool immovableAfterDrop; // 294
    game::LootSlotState lootState; // 295
    uint8_t unk296[0x2A0 - 0x296]; // 296
};
RED4EXT_ASSERT_SIZE(LootSlot, 0x2A0);
} // namespace game
using gameLootSlot = game::LootSlot;
} // namespace RED4ext

// clang-format on
