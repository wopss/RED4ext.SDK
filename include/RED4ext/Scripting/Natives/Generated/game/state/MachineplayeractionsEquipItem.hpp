#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineStateActionDefinition.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineplayeractionsEquipItem : game::state::MachineStateActionDefinition
{
    static constexpr const char* NAME = "gamestateMachineplayeractionsEquipItem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0x130 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(MachineplayeractionsEquipItem, 0x130);
} // namespace game::state
using gamestateMachineplayeractionsEquipItem = game::state::MachineplayeractionsEquipItem;
} // namespace RED4ext

// clang-format on
