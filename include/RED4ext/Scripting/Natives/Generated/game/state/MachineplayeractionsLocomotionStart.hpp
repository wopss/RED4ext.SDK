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
struct MachineplayeractionsLocomotionStart : game::state::MachineStateActionDefinition
{
    static constexpr const char* NAME = "gamestateMachineplayeractionsLocomotionStart";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MachineplayeractionsLocomotionStart, 0x60);
} // namespace game::state
using gamestateMachineplayeractionsLocomotionStart = game::state::MachineplayeractionsLocomotionStart;
} // namespace RED4ext

// clang-format on
