#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IMovingPlatformMovementPointToPoint.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) MovingPlatformMovementDynamic : game::IMovingPlatformMovementPointToPoint
{
    static constexpr const char* NAME = "gameMovingPlatformMovementDynamic";
    static constexpr const char* ALIAS = "MovingPlatformMovementDynamic";

    CName curveName; // 90
    uint8_t unk98[0xB0 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(MovingPlatformMovementDynamic, 0xB0);
} // namespace game
using gameMovingPlatformMovementDynamic = game::MovingPlatformMovementDynamic;
using MovingPlatformMovementDynamic = game::MovingPlatformMovementDynamic;
} // namespace RED4ext

// clang-format on
