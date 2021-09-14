#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace AI { 
struct StoppedBeingTrackedAsHostile : AI::AIEvent
{
    static constexpr const char* NAME = "AIStoppedBeingTrackedAsHostile";
    static constexpr const char* ALIAS = "StoppedBeingTrackedAsHostile";

};
RED4EXT_ASSERT_SIZE(StoppedBeingTrackedAsHostile, 0x50);
} // namespace AI
using StoppedBeingTrackedAsHostile = AI::StoppedBeingTrackedAsHostile;
} // namespace RED4ext
