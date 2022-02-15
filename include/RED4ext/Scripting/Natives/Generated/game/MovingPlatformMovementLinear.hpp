#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IMovingPlatformMovementPointToPoint.hpp>

namespace RED4ext
{
namespace game { 
struct MovingPlatformMovementLinear : game::IMovingPlatformMovementPointToPoint
{
    static constexpr const char* NAME = "gameMovingPlatformMovementLinear";
    static constexpr const char* ALIAS = "MovingPlatformMovementLinear";

};
RED4EXT_ASSERT_SIZE(MovingPlatformMovementLinear, 0x90);
} // namespace game
using MovingPlatformMovementLinear = game::MovingPlatformMovementLinear;
} // namespace RED4ext
