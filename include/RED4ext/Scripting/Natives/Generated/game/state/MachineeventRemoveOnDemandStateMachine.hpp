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
struct MachineeventRemoveOnDemandStateMachine : red::Event
{
    static constexpr const char* NAME = "gamestateMachineeventRemoveOnDemandStateMachine";
    static constexpr const char* ALIAS = "PSMRemoveOnDemandStateMachine";

    game::state::MachineStateMachineIdentifier stateMachineIdentifier; // 40
};
RED4EXT_ASSERT_SIZE(MachineeventRemoveOnDemandStateMachine, 0x50);
} // namespace game::state
using gamestateMachineeventRemoveOnDemandStateMachine = game::state::MachineeventRemoveOnDemandStateMachine;
using PSMRemoveOnDemandStateMachine = game::state::MachineeventRemoveOnDemandStateMachine;
} // namespace RED4ext

// clang-format on
