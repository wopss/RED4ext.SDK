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
struct MachineplayeractionsWeaponActionBase : game::state::MachineStateActionDefinition
{
    static constexpr const char* NAME = "gamestateMachineplayeractionsWeaponActionBase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0x70 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(MachineplayeractionsWeaponActionBase, 0x70);
} // namespace game::state
using gamestateMachineplayeractionsWeaponActionBase = game::state::MachineplayeractionsWeaponActionBase;
} // namespace RED4ext

// clang-format on
