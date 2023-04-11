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
struct ActionMoveWithPolicyTreeNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionMoveWithPolicyTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    bool stopWhenDestinationReached; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(ActionMoveWithPolicyTreeNodeDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorActionMoveWithPolicyTreeNodeDefinition = AI::behavior::ActionMoveWithPolicyTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
