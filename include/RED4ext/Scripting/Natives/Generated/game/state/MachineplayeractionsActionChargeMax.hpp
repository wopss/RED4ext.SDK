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
struct MachineplayeractionsActionChargeMax : game::state::MachineplayeractionsWeaponActionBase
{
    static constexpr const char* NAME = "gamestateMachineplayeractionsActionChargeMax";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MachineplayeractionsActionChargeMax, 0x70);
} // namespace game::state
using gamestateMachineplayeractionsActionChargeMax = game::state::MachineplayeractionsActionChargeMax;
} // namespace RED4ext

// clang-format on
