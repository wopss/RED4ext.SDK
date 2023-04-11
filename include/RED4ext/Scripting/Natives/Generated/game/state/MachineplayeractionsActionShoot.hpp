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
struct MachineplayeractionsActionShoot : game::state::MachineplayeractionsWeaponActionBase
{
    static constexpr const char* NAME = "gamestateMachineplayeractionsActionShoot";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk70[0x78 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(MachineplayeractionsActionShoot, 0x78);
} // namespace game::state
using gamestateMachineplayeractionsActionShoot = game::state::MachineplayeractionsActionShoot;
} // namespace RED4ext

// clang-format on
