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
struct RestoreSavedPatrolProgressTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorRestoreSavedPatrolProgressTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> path; // 38
    Handle<AI::ArgumentMapping> savedState; // 48
    Handle<AI::ArgumentMapping> patrolProgress; // 58
    Handle<AI::ArgumentMapping> destinationPosition; // 68
    Handle<AI::ArgumentMapping> destinationTangent; // 78
};
RED4EXT_ASSERT_SIZE(RestoreSavedPatrolProgressTaskDefinition, 0x88);
} // namespace AI::behavior
using AIbehaviorRestoreSavedPatrolProgressTaskDefinition = AI::behavior::RestoreSavedPatrolProgressTaskDefinition;
} // namespace RED4ext

// clang-format on
