#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IMovingPlatformMovement.hpp>

namespace RED4ext
{
namespace game
{
struct IMovingPlatformMovementPointToPoint : game::IMovingPlatformMovement
{
    static constexpr const char* NAME = "gameIMovingPlatformMovementPointToPoint";
    static constexpr const char* ALIAS = "IMovingPlatformMovementPointToPoint";

    uint8_t unk58[0x90 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(IMovingPlatformMovementPointToPoint, 0x90);
} // namespace game
using gameIMovingPlatformMovementPointToPoint = game::IMovingPlatformMovementPointToPoint;
using IMovingPlatformMovementPointToPoint = game::IMovingPlatformMovementPointToPoint;
} // namespace RED4ext

// clang-format on
