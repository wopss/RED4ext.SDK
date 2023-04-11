#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ActionItemHandlingNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct ActionUnequipItemNodeDefinition : AI::behavior::ActionItemHandlingNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionUnequipItemNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ActionUnequipItemNodeDefinition, 0x60);
} // namespace AI::behavior
using AIbehaviorActionUnequipItemNodeDefinition = AI::behavior::ActionUnequipItemNodeDefinition;
} // namespace RED4ext

// clang-format on
