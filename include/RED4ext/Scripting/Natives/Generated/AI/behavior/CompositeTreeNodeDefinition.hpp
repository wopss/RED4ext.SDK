#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { struct TreeNodeDefinition; }

namespace AI::behavior
{
struct CompositeTreeNodeDefinition : AI::behavior::TreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorCompositeTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<AI::behavior::TreeNodeDefinition>> children; // 30
};
RED4EXT_ASSERT_SIZE(CompositeTreeNodeDefinition, 0x40);
} // namespace AI::behavior
using AIbehaviorCompositeTreeNodeDefinition = AI::behavior::CompositeTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
