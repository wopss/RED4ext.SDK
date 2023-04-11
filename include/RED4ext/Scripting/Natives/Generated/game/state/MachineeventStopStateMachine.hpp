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
struct MachineeventStopStateMachine : red::Event
{
    static constexpr const char* NAME = "gamestateMachineeventStopStateMachine";
    static constexpr const char* ALIAS = "PSMStopStateMachine";

    game::state::MachineStateMachineIdentifier stateMachineIdentifier; // 40
};
RED4EXT_ASSERT_SIZE(MachineeventStopStateMachine, 0x50);
} // namespace game::state
using gamestateMachineeventStopStateMachine = game::state::MachineeventStopStateMachine;
using PSMStopStateMachine = game::state::MachineeventStopStateMachine;
} // namespace RED4ext

// clang-format on
