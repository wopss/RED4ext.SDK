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
struct MovingPlatformBeforeArrivedAt : red::Event
{
    static constexpr const char* NAME = "gameMovingPlatformBeforeArrivedAt";
    static constexpr const char* ALIAS = "BeforeArrivedAt";

};
RED4EXT_ASSERT_SIZE(MovingPlatformBeforeArrivedAt, 0x40);
} // namespace game
using gameMovingPlatformBeforeArrivedAt = game::MovingPlatformBeforeArrivedAt;
using BeforeArrivedAt = game::MovingPlatformBeforeArrivedAt;
} // namespace RED4ext

// clang-format on
