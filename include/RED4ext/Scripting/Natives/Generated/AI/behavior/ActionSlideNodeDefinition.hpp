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
struct ActionSlideNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionSlideNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> duration; // 40
    Handle<AI::ArgumentMapping> ignoreNavigation; // 50
    Handle<AI::ArgumentMapping> rotateTowardsMovementDirection; // 60
};
RED4EXT_ASSERT_SIZE(ActionSlideNodeDefinition, 0x70);
} // namespace AI::behavior
using AIbehaviorActionSlideNodeDefinition = AI::behavior::ActionSlideNodeDefinition;
} // namespace RED4ext

// clang-format on
