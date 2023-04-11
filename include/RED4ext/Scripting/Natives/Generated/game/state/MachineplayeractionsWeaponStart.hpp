#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineplayeractionsWeaponActionBase.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineplayeractionsWeaponStart : game::state::MachineplayeractionsWeaponActionBase
{
    static constexpr const char* NAME = "gamestateMachineplayeractionsWeaponStart";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MachineplayeractionsWeaponStart, 0x70);
} // namespace game::state
using gamestateMachineplayeractionsWeaponStart = game::state::MachineplayeractionsWeaponStart;
} // namespace RED4ext

// clang-format on
