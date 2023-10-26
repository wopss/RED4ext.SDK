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
struct __declspec(align(0x10)) MachineplayeractionsLocomotionLadder : game::state::MachineplayeractionsLocomotionBase
{
    static constexpr const char* NAME = "gamestateMachineplayeractionsLocomotionLadder";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x1C0 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(MachineplayeractionsLocomotionLadder, 0x1C0);
} // namespace game::state
using gamestateMachineplayeractionsLocomotionLadder = game::state::MachineplayeractionsLocomotionLadder;
} // namespace RED4ext

// clang-format on
