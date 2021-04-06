#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/LootContainerBase.hpp>
#include <RED4ext/Types/generated/game/LootSlotState.hpp>

namespace RED4ext
{
namespace game { 
struct LootSlot : game::LootContainerBase
{
    static constexpr const char* NAME = "gameLootSlot";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk248[0x270 - 0x248]; // 248
    float dropChance; // 270
    bool immovableAfterDrop; // 274
    game::LootSlotState lootState; // 275
    uint8_t unk276[0x280 - 0x276]; // 276
};
RED4EXT_ASSERT_SIZE(LootSlot, 0x280);
} // namespace game
} // namespace RED4ext
