#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/LootContainerBase.hpp>
#include <RED4ext/Types/generated/game/LootSlotState.hpp>

namespace RED4ext
{
namespace game { 
struct LootSlot : game::LootContainerBase
{
    static constexpr const char* NAME = "gameLootSlot";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk250[0x278 - 0x250]; // 250
    float dropChance; // 278
    bool immovableAfterDrop; // 27C
    game::LootSlotState lootState; // 27D
    uint8_t unk27E[0x288 - 0x27E]; // 27E
};
RED4EXT_ASSERT_SIZE(LootSlot, 0x288);
} // namespace game
} // namespace RED4ext
