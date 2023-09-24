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
struct CombatNodeParams_ThrowGrenade : quest::CombatNodeParams
{
    static constexpr const char* NAME = "questCombatNodeParams_ThrowGrenade";
    static constexpr const char* ALIAS = NAME;

    NodeRef targetOverrideNode; // 40
    game::EntityReference targetOverridePuppet; // 48
    float duration; // 80
    bool once; // 84
    bool immediately; // 85
    bool force; // 86
    uint8_t unk87[0x88 - 0x87]; // 87
};
RED4EXT_ASSERT_SIZE(CombatNodeParams_ThrowGrenade, 0x88);
} // namespace quest
using questCombatNodeParams_ThrowGrenade = quest::CombatNodeParams_ThrowGrenade;
} // namespace RED4ext

// clang-format on
