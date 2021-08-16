#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game { 
struct GameplayLogicPackageObjectID
{
    static constexpr const char* NAME = "gameGameplayLogicPackageObjectID";
    static constexpr const char* ALIAS = "GameplayLogicPackageObjectID";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(GameplayLogicPackageObjectID, 0x8);
} // namespace game
using GameplayLogicPackageObjectID = game::GameplayLogicPackageObjectID;
} // namespace RED4ext
