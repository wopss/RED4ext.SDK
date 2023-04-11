#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/graph/GraphConnectionDefinition.hpp>

namespace RED4ext
{
namespace game::state { struct MachineFunctor; }

namespace game::state
{
struct MachineTransition : graph::GraphConnectionDefinition
{
    static constexpr const char* NAME = "gamestateMachineTransition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x58 - 0x50]; // 50
    Handle<game::state::MachineFunctor> transitionCondition; // 58
    uint8_t unk68[0x88 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(MachineTransition, 0x88);
} // namespace game::state
using gamestateMachineTransition = game::state::MachineTransition;
} // namespace RED4ext

// clang-format on
