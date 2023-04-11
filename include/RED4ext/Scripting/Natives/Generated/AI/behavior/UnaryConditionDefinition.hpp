#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { struct ConditionDefinition; }

namespace AI::behavior
{
struct UnaryConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorUnaryConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::ConditionDefinition> child; // 38
};
RED4EXT_ASSERT_SIZE(UnaryConditionDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorUnaryConditionDefinition = AI::behavior::UnaryConditionDefinition;
} // namespace RED4ext

// clang-format on
