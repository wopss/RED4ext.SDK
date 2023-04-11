#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ActionRotateBaseTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct ActionRotateToObjectTreeNodeDefinition : AI::behavior::ActionRotateBaseTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionRotateToObjectTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> completeWhenRotated; // 80
};
RED4EXT_ASSERT_SIZE(ActionRotateToObjectTreeNodeDefinition, 0x90);
} // namespace AI::behavior
using AIbehaviorActionRotateToObjectTreeNodeDefinition = AI::behavior::ActionRotateToObjectTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
