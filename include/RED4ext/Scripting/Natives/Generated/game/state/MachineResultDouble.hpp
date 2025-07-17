#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineResultDouble
{
    static constexpr const char* NAME = "gamestateMachineResultDouble";
    static constexpr const char* ALIAS = "StateResultDouble";

    bool valid; // 00
    uint8_t unk01[0x8 - 0x1]; // 1
    double value; // 08
};
RED4EXT_ASSERT_SIZE(MachineResultDouble, 0x10);
} // namespace game::state
using gamestateMachineResultDouble = game::state::MachineResultDouble;
using StateResultDouble = game::state::MachineResultDouble;
} // namespace RED4ext

// clang-format on
