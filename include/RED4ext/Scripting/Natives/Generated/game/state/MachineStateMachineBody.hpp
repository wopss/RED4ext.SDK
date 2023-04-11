#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineIStateMachineBody.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineStateMachineBody : game::state::MachineIStateMachineBody
{
    static constexpr const char* NAME = "gamestateMachineStateMachineBody";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x48 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(MachineStateMachineBody, 0x48);
} // namespace game::state
using gamestateMachineStateMachineBody = game::state::MachineStateMachineBody;
} // namespace RED4ext

// clang-format on
