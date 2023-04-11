#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ToggleCombatForPlayer_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questToggleCombatForPlayer_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool startCombat; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(ToggleCombatForPlayer_NodeType, 0x38);
} // namespace quest
using questToggleCombatForPlayer_NodeType = quest::ToggleCombatForPlayer_NodeType;
} // namespace RED4ext

// clang-format on
