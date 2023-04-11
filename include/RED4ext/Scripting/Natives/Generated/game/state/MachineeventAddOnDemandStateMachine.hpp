#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineStateMachineInstanceData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::state
{
struct MachineeventAddOnDemandStateMachine : red::Event
{
    static constexpr const char* NAME = "gamestateMachineeventAddOnDemandStateMachine";
    static constexpr const char* ALIAS = "PSMAddOnDemandStateMachine";

    CName stateMachineName; // 40
    game::state::MachineStateMachineInstanceData instanceData; // 48
    WeakHandle<game::Object> owner; // 68
    bool tryHotSwap; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
};
RED4EXT_ASSERT_SIZE(MachineeventAddOnDemandStateMachine, 0x80);
} // namespace game::state
using gamestateMachineeventAddOnDemandStateMachine = game::state::MachineeventAddOnDemandStateMachine;
using PSMAddOnDemandStateMachine = game::state::MachineeventAddOnDemandStateMachine;
} // namespace RED4ext

// clang-format on
