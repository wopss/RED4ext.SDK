#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SquadScriptInterface.hpp>

namespace RED4ext
{
namespace AI
{
struct CombatSquadScriptInterface : AI::SquadScriptInterface
{
    static constexpr const char* NAME = "AICombatSquadScriptInterface";
    static constexpr const char* ALIAS = "CombatSquadScriptInterface";

    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(CombatSquadScriptInterface, 0x60);
} // namespace AI
using AICombatSquadScriptInterface = AI::CombatSquadScriptInterface;
using CombatSquadScriptInterface = AI::CombatSquadScriptInterface;
} // namespace RED4ext

// clang-format on
