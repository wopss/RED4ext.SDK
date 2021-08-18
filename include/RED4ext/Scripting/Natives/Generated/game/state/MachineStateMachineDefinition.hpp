#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/graph/GraphDefinition.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineStateMachineDefinition : graph::GraphDefinition
{
    static constexpr const char* NAME = "gamestateMachineStateMachineDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xB8 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MachineStateMachineDefinition, 0xB8);
} // namespace game::state
} // namespace RED4ext
