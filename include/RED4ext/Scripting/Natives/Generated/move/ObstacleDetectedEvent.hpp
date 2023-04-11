#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace move
{
struct ObstacleDetectedEvent : red::Event
{
    static constexpr const char* NAME = "moveObstacleDetectedEvent";
    static constexpr const char* ALIAS = "AnimObstacleDetected";

};
RED4EXT_ASSERT_SIZE(ObstacleDetectedEvent, 0x40);
} // namespace move
using moveObstacleDetectedEvent = move::ObstacleDetectedEvent;
using AnimObstacleDetected = move::ObstacleDetectedEvent;
} // namespace RED4ext

// clang-format on
