#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineplayeractionsLocomotionSimple.hpp>

namespace RED4ext
{
namespace game::state
{
struct __declspec(align(0x10)) MachineplayeractionsLocomotionAir : game::state::MachineplayeractionsLocomotionSimple
{
    static constexpr const char* NAME = "gamestateMachineplayeractionsLocomotionAir";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MachineplayeractionsLocomotionAir, 0x170);
} // namespace game::state
using gamestateMachineplayeractionsLocomotionAir = game::state::MachineplayeractionsLocomotionAir;
} // namespace RED4ext

// clang-format on
