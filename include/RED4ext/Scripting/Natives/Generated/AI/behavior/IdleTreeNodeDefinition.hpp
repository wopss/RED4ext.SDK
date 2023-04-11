#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/LeafTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct IdleTreeNodeDefinition : AI::behavior::LeafTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorIdleTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IdleTreeNodeDefinition, 0x30);
} // namespace AI::behavior
using AIbehaviorIdleTreeNodeDefinition = AI::behavior::IdleTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
