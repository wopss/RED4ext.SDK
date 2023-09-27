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
struct FindClosestPointOnPathTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorFindClosestPointOnPathTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> path; // 38
    Handle<AI::ArgumentMapping> forceStartFromClosest; // 48
    Handle<AI::ArgumentMapping> patrolProgress; // 58
    Handle<AI::ArgumentMapping> positionOnPath; // 68
    Handle<AI::ArgumentMapping> entryTangent; // 78
};
RED4EXT_ASSERT_SIZE(FindClosestPointOnPathTaskDefinition, 0x88);
} // namespace AI::behavior
using AIbehaviorFindClosestPointOnPathTaskDefinition = AI::behavior::FindClosestPointOnPathTaskDefinition;
} // namespace RED4ext

// clang-format on
