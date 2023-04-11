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
struct FindTeleportPositionTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorFindTeleportPositionTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> patrolPath; // 38
    Handle<AI::ArgumentMapping> teleportPosition; // 48
    Handle<AI::ArgumentMapping> teleportRotation; // 58
};
RED4EXT_ASSERT_SIZE(FindTeleportPositionTaskDefinition, 0x68);
} // namespace AI::behavior
using AIbehaviorFindTeleportPositionTaskDefinition = AI::behavior::FindTeleportPositionTaskDefinition;
} // namespace RED4ext

// clang-format on
