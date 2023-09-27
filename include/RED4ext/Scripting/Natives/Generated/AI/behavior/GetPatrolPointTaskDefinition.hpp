#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct GetPatrolPointTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorGetPatrolPointTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> inPatrolDistance; // 38
    Handle<AI::ArgumentMapping> inLastKnownPosition; // 48
    Handle<AI::ArgumentMapping> outFollowTrailPoint; // 58
};
RED4EXT_ASSERT_SIZE(GetPatrolPointTaskDefinition, 0x68);
} // namespace AI::behavior
using AIbehaviorGetPatrolPointTaskDefinition = AI::behavior::GetPatrolPointTaskDefinition;
} // namespace RED4ext

// clang-format on
