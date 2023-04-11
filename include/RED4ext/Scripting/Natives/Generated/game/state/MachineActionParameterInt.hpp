#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineActionParameterInt
{
    static constexpr const char* NAME = "gamestateMachineActionParameterInt";
    static constexpr const char* ALIAS = "ActionParameterInt";

    uint8_t unk00[0x8 - 0x0]; // 0
    CName name; // 08
    int32_t value; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(MachineActionParameterInt, 0x18);
} // namespace game::state
using gamestateMachineActionParameterInt = game::state::MachineActionParameterInt;
using ActionParameterInt = game::state::MachineActionParameterInt;
} // namespace RED4ext

// clang-format on
