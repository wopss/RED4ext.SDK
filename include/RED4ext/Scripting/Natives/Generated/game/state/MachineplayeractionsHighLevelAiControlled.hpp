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
struct MachineplayeractionsHighLevelAiControlled : game::state::MachineStateActionDefinition
{
    static constexpr const char* NAME = "gamestateMachineplayeractionsHighLevelAiControlled";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MachineplayeractionsHighLevelAiControlled, 0x60);
} // namespace game::state
using gamestateMachineplayeractionsHighLevelAiControlled = game::state::MachineplayeractionsHighLevelAiControlled;
} // namespace RED4ext

// clang-format on
