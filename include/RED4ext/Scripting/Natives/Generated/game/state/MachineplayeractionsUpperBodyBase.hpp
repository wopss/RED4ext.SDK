#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineStateActionDefinition.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineplayeractionsUpperBodyBase : game::state::MachineStateActionDefinition
{
    static constexpr const char* NAME = "gamestateMachineplayeractionsUpperBodyBase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0x80 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(MachineplayeractionsUpperBodyBase, 0x80);
} // namespace game::state
using gamestateMachineplayeractionsUpperBodyBase = game::state::MachineplayeractionsUpperBodyBase;
} // namespace RED4ext

// clang-format on
