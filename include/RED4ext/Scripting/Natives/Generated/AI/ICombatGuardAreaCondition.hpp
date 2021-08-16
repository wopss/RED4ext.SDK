#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace AI { 
struct ICombatGuardAreaCondition : IScriptable
{
    static constexpr const char* NAME = "AIICombatGuardAreaCondition";
    static constexpr const char* ALIAS = "ICombatRestrictMovementAreaCondition";

};
RED4EXT_ASSERT_SIZE(ICombatGuardAreaCondition, 0x40);
} // namespace AI
using ICombatRestrictMovementAreaCondition = AI::ICombatGuardAreaCondition;
} // namespace RED4ext
