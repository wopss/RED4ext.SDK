#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineIStateActionDefinition.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineStateActionDefinition : game::state::MachineIStateActionDefinition
{
    static constexpr const char* NAME = "gamestateMachineStateActionDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x60 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(MachineStateActionDefinition, 0x60);
} // namespace game::state
using gamestateMachineStateActionDefinition = game::state::MachineStateActionDefinition;
} // namespace RED4ext

// clang-format on
