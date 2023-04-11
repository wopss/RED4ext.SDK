#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineActionParameterTweakDBID
{
    static constexpr const char* NAME = "gamestateMachineActionParameterTweakDBID";
    static constexpr const char* ALIAS = "ActionParameterTweakDBID";

    uint8_t unk00[0x8 - 0x0]; // 0
    CName name; // 08
    TweakDBID value; // 10
};
RED4EXT_ASSERT_SIZE(MachineActionParameterTweakDBID, 0x18);
} // namespace game::state
using gamestateMachineActionParameterTweakDBID = game::state::MachineActionParameterTweakDBID;
using ActionParameterTweakDBID = game::state::MachineActionParameterTweakDBID;
} // namespace RED4ext

// clang-format on
