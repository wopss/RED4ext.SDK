#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/IGameplayLogicPackageSystem.hpp>

namespace RED4ext
{
namespace game { 
struct GameplayLogicPackageSystem : game::IGameplayLogicPackageSystem
{
    static constexpr const char* NAME = "gameGameplayLogicPackageSystem";
    static constexpr const char* ALIAS = "GameplayLogicPackageSystem";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GameplayLogicPackageSystem, 0x70);
} // namespace game
using GameplayLogicPackageSystem = game::GameplayLogicPackageSystem;
} // namespace RED4ext
