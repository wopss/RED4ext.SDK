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
struct ActionDroneMoveTreeNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionDroneMoveTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> moveType; // 40
    Handle<AI::ArgumentMapping> movementTarget; // 50
    Handle<AI::ArgumentMapping> target; // 60
    Handle<AI::ArgumentMapping> strafingTarget; // 70
    Handle<AI::ArgumentMapping> toleranceRadius; // 80
    Handle<AI::ArgumentMapping> desiredDistanceFromTarget; // 90
    Handle<AI::ArgumentMapping> stopWhenDestinationReached; // A0
    Handle<AI::ArgumentMapping> rotateEntity; // B0
    uint8_t unkC0[0xC8 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(ActionDroneMoveTreeNodeDefinition, 0xC8);
} // namespace AI::behavior
using AIbehaviorActionDroneMoveTreeNodeDefinition = AI::behavior::ActionDroneMoveTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
