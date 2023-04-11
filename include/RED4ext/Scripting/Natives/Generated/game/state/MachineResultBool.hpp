#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineResultBool
{
    static constexpr const char* NAME = "gamestateMachineResultBool";
    static constexpr const char* ALIAS = "StateResultBool";

    bool valid; // 00
    bool value; // 01
};
RED4EXT_ASSERT_SIZE(MachineResultBool, 0x2);
} // namespace game::state
using gamestateMachineResultBool = game::state::MachineResultBool;
using StateResultBool = game::state::MachineResultBool;
} // namespace RED4ext

// clang-format on
