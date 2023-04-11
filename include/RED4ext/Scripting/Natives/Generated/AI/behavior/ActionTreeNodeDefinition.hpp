#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/LeafTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct ActionTreeNodeDefinition : AI::behavior::LeafTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> command; // 30
};
RED4EXT_ASSERT_SIZE(ActionTreeNodeDefinition, 0x40);
} // namespace AI::behavior
using AIbehaviorActionTreeNodeDefinition = AI::behavior::ActionTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
