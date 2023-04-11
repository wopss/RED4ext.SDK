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
struct JoinFollowerSquadWithTargetDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorJoinFollowerSquadWithTargetDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> follower; // 38
};
RED4EXT_ASSERT_SIZE(JoinFollowerSquadWithTargetDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorJoinFollowerSquadWithTargetDefinition = AI::behavior::JoinFollowerSquadWithTargetDefinition;
} // namespace RED4ext

// clang-format on
