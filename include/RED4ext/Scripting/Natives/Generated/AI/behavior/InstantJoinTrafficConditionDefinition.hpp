#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct InstantJoinTrafficConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorInstantJoinTrafficConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> joinTrafficSettings; // 38
    Handle<AI::ArgumentMapping> closestPointOnPath; // 48
    Handle<AI::ArgumentMapping> pathDirection; // 58
    Handle<AI::ArgumentMapping> runOnTraffic; // 68
};
RED4EXT_ASSERT_SIZE(InstantJoinTrafficConditionDefinition, 0x78);
} // namespace AI::behavior
using AIbehaviorInstantJoinTrafficConditionDefinition = AI::behavior::InstantJoinTrafficConditionDefinition;
} // namespace RED4ext

// clang-format on
