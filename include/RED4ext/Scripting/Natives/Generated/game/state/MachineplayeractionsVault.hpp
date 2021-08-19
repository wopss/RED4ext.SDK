#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineplayeractionsLocomotionBase.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineplayeractionsVault : game::state::MachineplayeractionsLocomotionBase
{
    static constexpr const char* NAME = "gamestateMachineplayeractionsVault";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x150 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(MachineplayeractionsVault, 0x150);
} // namespace game::state
} // namespace RED4ext
