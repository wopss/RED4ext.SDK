#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineStateMachineIdentifier.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineeventStartStateMachine : red::Event
{
    static constexpr const char* NAME = "gamestateMachineeventStartStateMachine";
    static constexpr const char* ALIAS = "PSMStartStateMachine";

    game::state::MachineStateMachineIdentifier stateMachineIdentifier; // 40
};
RED4EXT_ASSERT_SIZE(MachineeventStartStateMachine, 0x50);
} // namespace game::state
using PSMStartStateMachine = game::state::MachineeventStartStateMachine;
} // namespace RED4ext
