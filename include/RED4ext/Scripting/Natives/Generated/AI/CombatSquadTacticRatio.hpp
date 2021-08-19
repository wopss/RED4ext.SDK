#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI { 
struct CombatSquadTacticRatio
{
    static constexpr const char* NAME = "AICombatSquadTacticRatio";
    static constexpr const char* ALIAS = NAME;

    float ratioSum; // 00
    float reachSum; // 04
    float area; // 08
};
RED4EXT_ASSERT_SIZE(CombatSquadTacticRatio, 0xC);
} // namespace AI
} // namespace RED4ext
