#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/LootContainerBase.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/LootSlotState.hpp>

namespace RED4ext
{
namespace game { 
struct LootSlot : game::LootContainerBase
{
    static constexpr const char* NAME = "gameLootSlot";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk260[0x288 - 0x260]; // 260
    float dropChance; // 288
    bool immovableAfterDrop; // 28C
    game::LootSlotState lootState; // 28D
    uint8_t unk28E[0x298 - 0x28E]; // 28E
};
RED4EXT_ASSERT_SIZE(LootSlot, 0x298);
} // namespace game
} // namespace RED4ext
