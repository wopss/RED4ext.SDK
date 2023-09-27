#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct MovingPlatformMovementStateChanged : red::Event
{
    static constexpr const char* NAME = "gameMovingPlatformMovementStateChanged";
    static constexpr const char* ALIAS = "MovementStateChanged";

    bool isMoving; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(MovingPlatformMovementStateChanged, 0x48);
} // namespace game
using gameMovingPlatformMovementStateChanged = game::MovingPlatformMovementStateChanged;
using MovementStateChanged = game::MovingPlatformMovementStateChanged;
} // namespace RED4ext

// clang-format on
