#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DriveTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct DriveSummoningTreeNodeDefinition : AI::behavior::DriveTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorDriveSummoningTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DriveSummoningTreeNodeDefinition, 0x40);
} // namespace AI::behavior
using AIbehaviorDriveSummoningTreeNodeDefinition = AI::behavior::DriveSummoningTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
