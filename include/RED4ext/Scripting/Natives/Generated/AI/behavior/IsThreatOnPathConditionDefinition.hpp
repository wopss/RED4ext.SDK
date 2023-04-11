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
struct IsThreatOnPathConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorIsThreatOnPathConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> threatObject; // 38
    Handle<AI::ArgumentMapping> threatRadius; // 48
};
RED4EXT_ASSERT_SIZE(IsThreatOnPathConditionDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorIsThreatOnPathConditionDefinition = AI::behavior::IsThreatOnPathConditionDefinition;
} // namespace RED4ext

// clang-format on
