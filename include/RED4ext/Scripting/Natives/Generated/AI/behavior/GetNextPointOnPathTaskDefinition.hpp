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
struct GetNextPointOnPathTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorGetNextPointOnPathTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> patrolProgress; // 38
    Handle<AI::ArgumentMapping> positionOnPath; // 48
    Handle<AI::ArgumentMapping> entryTangent; // 58
};
RED4EXT_ASSERT_SIZE(GetNextPointOnPathTaskDefinition, 0x68);
} // namespace AI::behavior
using AIbehaviorGetNextPointOnPathTaskDefinition = AI::behavior::GetNextPointOnPathTaskDefinition;
} // namespace RED4ext

// clang-format on
