#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MovingPlatformMovementInitializationType.hpp>

namespace RED4ext
{
namespace game { 
struct IMovingPlatformMovementInitData
{
    static constexpr const char* NAME = "gameIMovingPlatformMovementInitData";
    static constexpr const char* ALIAS = NAME;

    game::MovingPlatformMovementInitializationType initType; // 00
    float initValue; // 04
};
RED4EXT_ASSERT_SIZE(IMovingPlatformMovementInitData, 0x8);
} // namespace game
} // namespace RED4ext
