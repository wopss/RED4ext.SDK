#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ILootManager.hpp>

namespace RED4ext
{
namespace game { 
struct LootManager : game::ILootManager
{
    static constexpr const char* NAME = "gameLootManager";
    static constexpr const char* ALIAS = "LootManager";

    uint8_t unk48[0x220 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(LootManager, 0x220);
} // namespace game
using LootManager = game::LootManager;
} // namespace RED4ext
