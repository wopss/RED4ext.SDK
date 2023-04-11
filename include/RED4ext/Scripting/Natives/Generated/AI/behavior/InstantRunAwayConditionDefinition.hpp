#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct InstantRunAwayConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorInstantRunAwayConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> destination; // 38
    Handle<AI::ArgumentMapping> runOnNavmesh; // 48
};
RED4EXT_ASSERT_SIZE(InstantRunAwayConditionDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorInstantRunAwayConditionDefinition = AI::behavior::InstantRunAwayConditionDefinition;
} // namespace RED4ext

// clang-format on
