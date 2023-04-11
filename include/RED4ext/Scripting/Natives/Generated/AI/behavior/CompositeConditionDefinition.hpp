#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { struct ConditionDefinition; }

namespace AI::behavior
{
struct CompositeConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorCompositeConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<AI::behavior::ConditionDefinition>> conditions; // 38
};
RED4EXT_ASSERT_SIZE(CompositeConditionDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorCompositeConditionDefinition = AI::behavior::CompositeConditionDefinition;
} // namespace RED4ext

// clang-format on
