#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IMovingPlatformSystem.hpp>

namespace RED4ext
{
namespace game { 
struct MovingPlatformSystem : game::IMovingPlatformSystem
{
    static constexpr const char* NAME = "gameMovingPlatformSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xB0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MovingPlatformSystem, 0xB0);
} // namespace game
} // namespace RED4ext
