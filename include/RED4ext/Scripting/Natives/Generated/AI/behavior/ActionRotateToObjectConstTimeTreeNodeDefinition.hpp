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
struct ActionRotateToObjectConstTimeTreeNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionRotateToObjectConstTimeTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> target; // 40
    Handle<AI::ArgumentMapping> angleOffset; // 50
    Handle<AI::ArgumentMapping> angleTolerance; // 60
    Handle<AI::ArgumentMapping> time; // 70
    Handle<AI::ArgumentMapping> keepUpdatingTarget; // 80
};
RED4EXT_ASSERT_SIZE(ActionRotateToObjectConstTimeTreeNodeDefinition, 0x90);
} // namespace AI::behavior
using AIbehaviorActionRotateToObjectConstTimeTreeNodeDefinition = AI::behavior::ActionRotateToObjectConstTimeTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
