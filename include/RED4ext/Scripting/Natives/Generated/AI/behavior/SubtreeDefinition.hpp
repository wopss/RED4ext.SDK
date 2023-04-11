#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/NestedTreeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { struct ParameterizedBehavior; }

namespace AI::behavior
{
struct SubtreeDefinition : AI::behavior::NestedTreeDefinition
{
    static constexpr const char* NAME = "AIbehaviorSubtreeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::ParameterizedBehavior> tree; // 48
};
RED4EXT_ASSERT_SIZE(SubtreeDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorSubtreeDefinition = AI::behavior::SubtreeDefinition;
} // namespace RED4ext

// clang-format on
