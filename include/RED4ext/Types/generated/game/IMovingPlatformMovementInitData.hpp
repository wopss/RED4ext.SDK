#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/MovingPlatformMovementInitializationType.hpp>

namespace RED4ext
{
namespace game { 
struct IMovingPlatformMovementInitData
{
    static constexpr const char* NAME = "gameIMovingPlatformMovementInitData";
    static constexpr const char* ALIAS = NAME;

    game::MovingPlatformMovementInitializationType initType; // 00
    float initValue; // 04
    NodeRef startNode; // 08
    NodeRef endNode; // 10
};
RED4EXT_ASSERT_SIZE(IMovingPlatformMovementInitData, 0x18);
} // namespace game
} // namespace RED4ext
