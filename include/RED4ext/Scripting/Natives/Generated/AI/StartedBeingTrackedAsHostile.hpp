#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace AI
{
struct StartedBeingTrackedAsHostile : AI::AIEvent
{
    static constexpr const char* NAME = "AIStartedBeingTrackedAsHostile";
    static constexpr const char* ALIAS = "StartedBeingTrackedAsHostile";

};
RED4EXT_ASSERT_SIZE(StartedBeingTrackedAsHostile, 0x50);
} // namespace AI
using AIStartedBeingTrackedAsHostile = AI::StartedBeingTrackedAsHostile;
using StartedBeingTrackedAsHostile = AI::StartedBeingTrackedAsHostile;
} // namespace RED4ext

// clang-format on
