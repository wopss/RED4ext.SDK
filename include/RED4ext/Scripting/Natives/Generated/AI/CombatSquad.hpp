#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SquadBase.hpp>

namespace RED4ext
{
namespace AI
{
struct CombatSquad : AI::SquadBase
{
    static constexpr const char* NAME = "AICombatSquad";
    static constexpr const char* ALIAS = "CombatSquad";

    uint8_t unk148[0x270 - 0x148]; // 148
};
RED4EXT_ASSERT_SIZE(CombatSquad, 0x270);
} // namespace AI
using AICombatSquad = AI::CombatSquad;
using CombatSquad = AI::CombatSquad;
} // namespace RED4ext

// clang-format on
