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
struct MachineActionParameterWeakIScriptable
{
    static constexpr const char* NAME = "gamestateMachineActionParameterWeakIScriptable";
    static constexpr const char* ALIAS = "ActionParameterWeakIScriptable";

    uint8_t unk00[0x8 - 0x0]; // 0
    CName name; // 08
    WeakHandle<IScriptable> value; // 10
};
RED4EXT_ASSERT_SIZE(MachineActionParameterWeakIScriptable, 0x20);
} // namespace game::state
using gamestateMachineActionParameterWeakIScriptable = game::state::MachineActionParameterWeakIScriptable;
using ActionParameterWeakIScriptable = game::state::MachineActionParameterWeakIScriptable;
} // namespace RED4ext

// clang-format on
