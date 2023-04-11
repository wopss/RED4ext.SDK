#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ActionRotateBaseTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct ActionRotateToPositionTreeNodeDefinition : AI::behavior::ActionRotateBaseTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionRotateToPositionTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ActionRotateToPositionTreeNodeDefinition, 0x80);
} // namespace AI::behavior
using AIbehaviorActionRotateToPositionTreeNodeDefinition = AI::behavior::ActionRotateToPositionTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
