#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct TweakConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorTweakConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    TweakDBID recordId; // 38
};
RED4EXT_ASSERT_SIZE(TweakConditionDefinition, 0x40);
} // namespace AI::behavior
using AIbehaviorTweakConditionDefinition = AI::behavior::TweakConditionDefinition;
} // namespace RED4ext

// clang-format on
