#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ILootManager.hpp>

namespace RED4ext
{
namespace game
{
struct LootManager : game::ILootManager
{
    static constexpr const char* NAME = "gameLootManager";
    static constexpr const char* ALIAS = "LootManager";

    uint8_t unk48[0x278 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(LootManager, 0x278);
} // namespace game
using gameLootManager = game::LootManager;
using LootManager = game::LootManager;
} // namespace RED4ext

// clang-format on
