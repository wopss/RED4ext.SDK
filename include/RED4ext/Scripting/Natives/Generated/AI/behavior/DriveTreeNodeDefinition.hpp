#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ActionTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct DriveTreeNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorDriveTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DriveTreeNodeDefinition, 0x40);
} // namespace AI::behavior
using AIbehaviorDriveTreeNodeDefinition = AI::behavior::DriveTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
