#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ActionTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct ActionDynamicMoveTreeNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionDynamicMoveTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> moveType; // 40
    Handle<AI::ArgumentMapping> target; // 50
    Handle<AI::ArgumentMapping> targetPosition; // 60
    Handle<AI::ArgumentMapping> strafingTarget; // 70
    Handle<AI::ArgumentMapping> toleranceRadius; // 80
    Handle<AI::ArgumentMapping> desiredDistanceFromTarget; // 90
    Handle<AI::ArgumentMapping> stopWhenDestinationReached; // A0
    Handle<AI::ArgumentMapping> rotateEntity; // B0
    Handle<AI::ArgumentMapping> ignoreNavigation; // C0
};
RED4EXT_ASSERT_SIZE(ActionDynamicMoveTreeNodeDefinition, 0xD0);
} // namespace AI::behavior
using AIbehaviorActionDynamicMoveTreeNodeDefinition = AI::behavior::ActionDynamicMoveTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
