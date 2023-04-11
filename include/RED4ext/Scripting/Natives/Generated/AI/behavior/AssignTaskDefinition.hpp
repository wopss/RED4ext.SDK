#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/AssignTaskItem.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct AssignTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorAssignTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<AI::behavior::AssignTaskItem> assignments; // 38
    DynArray<AI::behavior::AssignTaskItem> endAssignments; // 48
};
RED4EXT_ASSERT_SIZE(AssignTaskDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorAssignTaskDefinition = AI::behavior::AssignTaskDefinition;
} // namespace RED4ext

// clang-format on
