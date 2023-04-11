#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI
{
struct CombatSquadTacticRatio
{
    static constexpr const char* NAME = "AICombatSquadTacticRatio";
    static constexpr const char* ALIAS = "TacticRatio";

    float ratioSum; // 00
    float reachSum; // 04
    float area; // 08
};
RED4EXT_ASSERT_SIZE(CombatSquadTacticRatio, 0xC);
} // namespace AI
using AICombatSquadTacticRatio = AI::CombatSquadTacticRatio;
using TacticRatio = AI::CombatSquadTacticRatio;
} // namespace RED4ext

// clang-format on
