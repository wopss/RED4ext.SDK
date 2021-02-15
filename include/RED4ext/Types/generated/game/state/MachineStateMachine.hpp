#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/graph/GraphDefinition.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineStateMachine : graph::GraphDefinition
{
    static constexpr const char* NAME = "gamestateMachineStateMachine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x178 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MachineStateMachine, 0x178);
} // namespace game::state
} // namespace RED4ext
