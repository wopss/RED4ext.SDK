#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineResultString
{
    static constexpr const char* NAME = "gamestateMachineResultString";
    static constexpr const char* ALIAS = "StateResultString";

    bool valid; // 00
    uint8_t unk01[0x8 - 0x1]; // 1
    CString value; // 08
};
RED4EXT_ASSERT_SIZE(MachineResultString, 0x28);
} // namespace game::state
using gamestateMachineResultString = game::state::MachineResultString;
using StateResultString = game::state::MachineResultString;
} // namespace RED4ext

// clang-format on
