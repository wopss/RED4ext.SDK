#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/CombatNodeParams.hpp>

namespace RED4ext
{
namespace quest
{
struct CombatNodeParams_CombatTarget : quest::CombatNodeParams
{
    static constexpr const char* NAME = "questCombatNodeParams_CombatTarget";
    static constexpr const char* ALIAS = NAME;

    NodeRef targetNode; // 40
    game::EntityReference targetPuppet; // 48
    float duration; // 80
    bool immediately; // 84
    uint8_t unk85[0x88 - 0x85]; // 85
};
RED4EXT_ASSERT_SIZE(CombatNodeParams_CombatTarget, 0x88);
} // namespace quest
using questCombatNodeParams_CombatTarget = quest::CombatNodeParams_CombatTarget;
} // namespace RED4ext

// clang-format on
