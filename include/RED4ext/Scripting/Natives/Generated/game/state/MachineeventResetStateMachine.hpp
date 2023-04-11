#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineStateMachineIdentifier.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineeventResetStateMachine : red::Event
{
    static constexpr const char* NAME = "gamestateMachineeventResetStateMachine";
    static constexpr const char* ALIAS = "PSMResetStateMachine";

    game::state::MachineStateMachineIdentifier stateMachineIdentifier; // 40
};
RED4EXT_ASSERT_SIZE(MachineeventResetStateMachine, 0x50);
} // namespace game::state
using gamestateMachineeventResetStateMachine = game::state::MachineeventResetStateMachine;
using PSMResetStateMachine = game::state::MachineeventResetStateMachine;
} // namespace RED4ext

// clang-format on
