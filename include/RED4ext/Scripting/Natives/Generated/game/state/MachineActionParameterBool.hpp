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
struct MachineActionParameterBool
{
    static constexpr const char* NAME = "gamestateMachineActionParameterBool";
    static constexpr const char* ALIAS = "ActionParameterBool";

    uint8_t unk00[0x8 - 0x0]; // 0
    CName name; // 08
    bool value; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(MachineActionParameterBool, 0x18);
} // namespace game::state
using gamestateMachineActionParameterBool = game::state::MachineActionParameterBool;
using ActionParameterBool = game::state::MachineActionParameterBool;
} // namespace RED4ext

// clang-format on
