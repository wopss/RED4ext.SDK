#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/graph/GraphConnectionDefinition.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineTransitionDefinition : graph::GraphConnectionDefinition
{
    static constexpr const char* NAME = "gamestateMachineTransitionDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x54 - 0x50]; // 50
    float priority; // 54
    uint8_t unk58[0x78 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(MachineTransitionDefinition, 0x78);
} // namespace game::state
using gamestateMachineTransitionDefinition = game::state::MachineTransitionDefinition;
} // namespace RED4ext

// clang-format on
