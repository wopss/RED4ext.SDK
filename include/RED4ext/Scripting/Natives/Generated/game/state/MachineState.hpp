#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/graph/GraphNodeDefinition.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineState : graph::GraphNodeDefinition
{
    static constexpr const char* NAME = "gamestateMachineState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x2D0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MachineState, 0x2D0);
} // namespace game::state
using gamestateMachineState = game::state::MachineState;
} // namespace RED4ext

// clang-format on
