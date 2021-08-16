#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/IMovingPlatformMovementPointToPoint.hpp>

namespace RED4ext
{
namespace game { 
struct MovingPlatformMovementDynamic : game::IMovingPlatformMovementPointToPoint
{
    static constexpr const char* NAME = "gameMovingPlatformMovementDynamic";
    static constexpr const char* ALIAS = "MovingPlatformMovementDynamic";

    CName curveName; // 80
    uint8_t unk88[0xA0 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(MovingPlatformMovementDynamic, 0xA0);
} // namespace game
using MovingPlatformMovementDynamic = game::MovingPlatformMovementDynamic;
} // namespace RED4ext
