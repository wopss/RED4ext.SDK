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
struct ActionDroneMoveSplineTreeNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionDroneMoveSplineTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> spline; // 40
};
RED4EXT_ASSERT_SIZE(ActionDroneMoveSplineTreeNodeDefinition, 0x50);
} // namespace AI::behavior
using AIbehaviorActionDroneMoveSplineTreeNodeDefinition = AI::behavior::ActionDroneMoveSplineTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
