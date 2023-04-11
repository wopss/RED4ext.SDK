#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/NestedTreeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct IncludedTreeDefinition : AI::behavior::NestedTreeDefinition
{
    static constexpr const char* NAME = "AIbehaviorIncludedTreeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> treeReference; // 48
};
RED4EXT_ASSERT_SIZE(IncludedTreeDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorIncludedTreeDefinition = AI::behavior::IncludedTreeDefinition;
} // namespace RED4ext

// clang-format on
