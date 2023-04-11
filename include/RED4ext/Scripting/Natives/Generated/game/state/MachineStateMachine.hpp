#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/graph/GraphDefinition.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineStateMachine : graph::GraphDefinition
{
    static constexpr const char* NAME = "gamestateMachineStateMachine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x180 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MachineStateMachine, 0x180);
} // namespace game::state
using gamestateMachineStateMachine = game::state::MachineStateMachine;
} // namespace RED4ext

// clang-format on
