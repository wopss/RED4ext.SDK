#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IMovingPlatformMovement.hpp>

namespace RED4ext
{
namespace game { 
struct IMovingPlatformMovementPointToPoint : game::IMovingPlatformMovement
{
    static constexpr const char* NAME = "gameIMovingPlatformMovementPointToPoint";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0x80 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(IMovingPlatformMovementPointToPoint, 0x80);
} // namespace game
} // namespace RED4ext
