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
struct MachineActionParameterDouble
{
    static constexpr const char* NAME = "gamestateMachineActionParameterDouble";
    static constexpr const char* ALIAS = "ActionParameterDouble";

    uint8_t unk00[0x8 - 0x0]; // 0
    CName name; // 08
    double value; // 10
};
RED4EXT_ASSERT_SIZE(MachineActionParameterDouble, 0x18);
} // namespace game::state
using gamestateMachineActionParameterDouble = game::state::MachineActionParameterDouble;
using ActionParameterDouble = game::state::MachineActionParameterDouble;
} // namespace RED4ext

// clang-format on
