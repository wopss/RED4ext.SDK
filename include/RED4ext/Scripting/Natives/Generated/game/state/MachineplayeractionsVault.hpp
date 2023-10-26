#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineplayeractionsLocomotionBase.hpp>

namespace RED4ext
{
namespace game::state
{
struct __declspec(align(0x10)) MachineplayeractionsVault : game::state::MachineplayeractionsLocomotionBase
{
    static constexpr const char* NAME = "gamestateMachineplayeractionsVault";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x150 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(MachineplayeractionsVault, 0x150);
} // namespace game::state
using gamestateMachineplayeractionsVault = game::state::MachineplayeractionsVault;
} // namespace RED4ext

// clang-format on
