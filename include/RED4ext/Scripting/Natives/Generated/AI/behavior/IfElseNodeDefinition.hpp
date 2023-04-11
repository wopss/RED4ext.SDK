#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/CompositeTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { struct ExpressionSocket; }

namespace AI::behavior
{
struct IfElseNodeDefinition : AI::behavior::CompositeTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorIfElseNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::ExpressionSocket> condition; // 40
};
RED4EXT_ASSERT_SIZE(IfElseNodeDefinition, 0x50);
} // namespace AI::behavior
using AIbehaviorIfElseNodeDefinition = AI::behavior::IfElseNodeDefinition;
} // namespace RED4ext

// clang-format on
