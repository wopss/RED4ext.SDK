#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { struct TreeNodeDefinition; }

namespace AI::behavior
{
struct DecoratorNodeDefinition : AI::behavior::TreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorDecoratorNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::TreeNodeDefinition> child; // 30
};
RED4EXT_ASSERT_SIZE(DecoratorNodeDefinition, 0x40);
} // namespace AI::behavior
using AIbehaviorDecoratorNodeDefinition = AI::behavior::DecoratorNodeDefinition;
} // namespace RED4ext

// clang-format on
