#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineResultInt
{
    static constexpr const char* NAME = "gamestateMachineResultInt";
    static constexpr const char* ALIAS = "StateResultInt";

    bool valid; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    int32_t value; // 04
};
RED4EXT_ASSERT_SIZE(MachineResultInt, 0x8);
} // namespace game::state
using gamestateMachineResultInt = game::state::MachineResultInt;
using StateResultInt = game::state::MachineResultInt;
} // namespace RED4ext

// clang-format on
