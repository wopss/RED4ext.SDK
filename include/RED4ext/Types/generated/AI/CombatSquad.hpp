#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/AI/SquadBase.hpp>

namespace RED4ext
{
namespace AI { 
struct CombatSquad : AI::SquadBase
{
    static constexpr const char* NAME = "AICombatSquad";
    static constexpr const char* ALIAS = "CombatSquad";

    uint8_t unk110[0x220 - 0x110]; // 110
};
RED4EXT_ASSERT_SIZE(CombatSquad, 0x220);
} // namespace AI
using CombatSquad = AI::CombatSquad;
} // namespace RED4ext
