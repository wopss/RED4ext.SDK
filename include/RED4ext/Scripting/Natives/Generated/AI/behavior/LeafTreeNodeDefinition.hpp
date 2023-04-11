#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct LeafTreeNodeDefinition : AI::behavior::TreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorLeafTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(LeafTreeNodeDefinition, 0x30);
} // namespace AI::behavior
using AIbehaviorLeafTreeNodeDefinition = AI::behavior::LeafTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
