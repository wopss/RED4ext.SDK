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
struct FindAlertedWorkspotTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorFindAlertedWorkspotTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> usedTokens; // 38
    Handle<AI::ArgumentMapping> spots; // 48
    Handle<AI::ArgumentMapping> radius; // 58
    Handle<AI::ArgumentMapping> outWorkspotData; // 68
};
RED4EXT_ASSERT_SIZE(FindAlertedWorkspotTaskDefinition, 0x78);
} // namespace AI::behavior
using AIbehaviorFindAlertedWorkspotTaskDefinition = AI::behavior::FindAlertedWorkspotTaskDefinition;
} // namespace RED4ext

// clang-format on
