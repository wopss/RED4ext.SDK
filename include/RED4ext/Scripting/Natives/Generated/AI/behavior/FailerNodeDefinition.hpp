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
struct FailerNodeDefinition : AI::behavior::LeafTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorFailerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(FailerNodeDefinition, 0x30);
} // namespace AI::behavior
using AIbehaviorFailerNodeDefinition = AI::behavior::FailerNodeDefinition;
} // namespace RED4ext

// clang-format on
