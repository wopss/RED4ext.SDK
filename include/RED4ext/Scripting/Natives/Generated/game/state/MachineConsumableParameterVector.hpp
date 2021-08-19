#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineActionParameterVector.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineConsumableParameterVector : game::state::MachineActionParameterVector
{
    static constexpr const char* NAME = "gamestateMachineConsumableParameterVector";
    static constexpr const char* ALIAS = NAME;

    bool consumed; // 30
    uint8_t unk31[0x40 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(MachineConsumableParameterVector, 0x40);
} // namespace game::state
} // namespace RED4ext
