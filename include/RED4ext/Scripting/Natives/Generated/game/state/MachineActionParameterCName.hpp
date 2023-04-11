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
struct MachineActionParameterCName
{
    static constexpr const char* NAME = "gamestateMachineActionParameterCName";
    static constexpr const char* ALIAS = "ActionParameterCName";

    uint8_t unk00[0x8 - 0x0]; // 0
    CName name; // 08
    CName value; // 10
};
RED4EXT_ASSERT_SIZE(MachineActionParameterCName, 0x18);
} // namespace game::state
using gamestateMachineActionParameterCName = game::state::MachineActionParameterCName;
using ActionParameterCName = game::state::MachineActionParameterCName;
} // namespace RED4ext

// clang-format on
