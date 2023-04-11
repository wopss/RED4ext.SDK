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
struct ActionMoveToSmartObjectNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionMoveToSmartObjectNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> smartObjectId; // 40
    Handle<AI::ArgumentMapping> lookAtTarget; // 50
    Handle<AI::ArgumentMapping> tolerance; // 60
    Handle<AI::ArgumentMapping> movementType; // 70
    Handle<AI::ArgumentMapping> ignoreNavigation; // 80
    Handle<AI::ArgumentMapping> rotateEntity; // 90
    Handle<AI::ArgumentMapping> useStart; // A0
    Handle<AI::ArgumentMapping> useStop; // B0
    Handle<AI::ArgumentMapping> forcedEntryAnimation; // C0
};
RED4EXT_ASSERT_SIZE(ActionMoveToSmartObjectNodeDefinition, 0xD0);
} // namespace AI::behavior
using AIbehaviorActionMoveToSmartObjectNodeDefinition = AI::behavior::ActionMoveToSmartObjectNodeDefinition;
} // namespace RED4ext

// clang-format on
