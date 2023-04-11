#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineResultFloat
{
    static constexpr const char* NAME = "gamestateMachineResultFloat";
    static constexpr const char* ALIAS = "StateResultFloat";

    bool valid; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    float value; // 04
};
RED4EXT_ASSERT_SIZE(MachineResultFloat, 0x8);
} // namespace game::state
using gamestateMachineResultFloat = game::state::MachineResultFloat;
using StateResultFloat = game::state::MachineResultFloat;
} // namespace RED4ext

// clang-format on
