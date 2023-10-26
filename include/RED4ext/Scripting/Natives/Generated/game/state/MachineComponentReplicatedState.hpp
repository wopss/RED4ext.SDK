#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineStateContext.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IComponentState.hpp>

namespace RED4ext
{
namespace game::state { struct MachineparameterTypeLadderDescription; }

namespace game::state
{
struct __declspec(align(0x10)) MachineComponentReplicatedState : net::IComponentState
{
    static constexpr const char* NAME = "gamestateMachineComponentReplicatedState";
    static constexpr const char* ALIAS = NAME;

    game::state::MachineStateContext stateContext; // 20
    Handle<game::state::MachineparameterTypeLadderDescription> enterLadderParameter; // 1A930
    bool exitLadderParameter; // 1A940
    uint8_t unk1A941[0x1A980 - 0x1A941]; // 1A941
};
RED4EXT_ASSERT_SIZE(MachineComponentReplicatedState, 0x1A980);
} // namespace game::state
using gamestateMachineComponentReplicatedState = game::state::MachineComponentReplicatedState;
} // namespace RED4ext

// clang-format on
