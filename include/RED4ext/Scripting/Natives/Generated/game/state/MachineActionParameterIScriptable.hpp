#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
struct IScriptable;

namespace game::state
{
struct MachineActionParameterIScriptable
{
    static constexpr const char* NAME = "gamestateMachineActionParameterIScriptable";
    static constexpr const char* ALIAS = "ActionParameterIScriptable";

    uint8_t unk00[0x8 - 0x0]; // 0
    CName name; // 08
    Handle<IScriptable> value; // 10
};
RED4EXT_ASSERT_SIZE(MachineActionParameterIScriptable, 0x20);
} // namespace game::state
using gamestateMachineActionParameterIScriptable = game::state::MachineActionParameterIScriptable;
using ActionParameterIScriptable = game::state::MachineActionParameterIScriptable;
} // namespace RED4ext

// clang-format on
