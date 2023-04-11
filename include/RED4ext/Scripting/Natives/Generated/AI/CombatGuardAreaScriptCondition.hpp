#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ICombatGuardAreaCondition.hpp>

namespace RED4ext
{
namespace AI
{
struct CombatGuardAreaScriptCondition : AI::ICombatGuardAreaCondition
{
    static constexpr const char* NAME = "AICombatGuardAreaScriptCondition";
    static constexpr const char* ALIAS = "CombatRestrictMovementAreaScriptCondition";

};
RED4EXT_ASSERT_SIZE(CombatGuardAreaScriptCondition, 0x40);
} // namespace AI
using AICombatGuardAreaScriptCondition = AI::CombatGuardAreaScriptCondition;
using CombatRestrictMovementAreaScriptCondition = AI::CombatGuardAreaScriptCondition;
} // namespace RED4ext

// clang-format on
