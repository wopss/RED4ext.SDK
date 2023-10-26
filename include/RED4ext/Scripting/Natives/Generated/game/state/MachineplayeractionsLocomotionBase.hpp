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
struct __declspec(align(0x10)) MachineplayeractionsLocomotionBase : game::state::MachineStateActionDefinition
{
    static constexpr const char* NAME = "gamestateMachineplayeractionsLocomotionBase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0x120 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(MachineplayeractionsLocomotionBase, 0x120);
} // namespace game::state
using gamestateMachineplayeractionsLocomotionBase = game::state::MachineplayeractionsLocomotionBase;
} // namespace RED4ext

// clang-format on
