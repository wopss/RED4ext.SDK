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
struct ActionRotateBaseTreeNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionRotateBaseTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> target; // 40
    Handle<AI::ArgumentMapping> angleOffset; // 50
    Handle<AI::ArgumentMapping> angleTolerance; // 60
    Handle<AI::ArgumentMapping> speed; // 70
};
RED4EXT_ASSERT_SIZE(ActionRotateBaseTreeNodeDefinition, 0x80);
} // namespace AI::behavior
using AIbehaviorActionRotateBaseTreeNodeDefinition = AI::behavior::ActionRotateBaseTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
