#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DriveTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct DriveAutodriveTreeNodeDefinition : AI::behavior::DriveTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorDriveAutodriveTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> laneFindRange; // 40
    Handle<AI::ArgumentMapping> minimumDistanceToTarget; // 50
    Handle<AI::ArgumentMapping> minimumDistanceToTargetVertical; // 60
};
RED4EXT_ASSERT_SIZE(DriveAutodriveTreeNodeDefinition, 0x70);
} // namespace AI::behavior
using AIbehaviorDriveAutodriveTreeNodeDefinition = AI::behavior::DriveAutodriveTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
