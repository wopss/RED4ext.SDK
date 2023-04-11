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
struct ActionSceneAnimationMotionNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionSceneAnimationMotionNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> params; // 40
    Handle<AI::ArgumentMapping> mountData; // 50
};
RED4EXT_ASSERT_SIZE(ActionSceneAnimationMotionNodeDefinition, 0x60);
} // namespace AI::behavior
using AIbehaviorActionSceneAnimationMotionNodeDefinition = AI::behavior::ActionSceneAnimationMotionNodeDefinition;
} // namespace RED4ext

// clang-format on
