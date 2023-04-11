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
struct ActionMountHandlingNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionMountHandlingNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ActionMountHandlingNodeDefinition, 0x40);
} // namespace AI::behavior
using AIbehaviorActionMountHandlingNodeDefinition = AI::behavior::ActionMountHandlingNodeDefinition;
} // namespace RED4ext

// clang-format on
