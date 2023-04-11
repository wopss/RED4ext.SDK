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
struct MachineResultCName
{
    static constexpr const char* NAME = "gamestateMachineResultCName";
    static constexpr const char* ALIAS = "StateResultCName";

    bool valid; // 00
    uint8_t unk01[0x8 - 0x1]; // 1
    CName value; // 08
};
RED4EXT_ASSERT_SIZE(MachineResultCName, 0x10);
} // namespace game::state
using gamestateMachineResultCName = game::state::MachineResultCName;
using StateResultCName = game::state::MachineResultCName;
} // namespace RED4ext

// clang-format on
