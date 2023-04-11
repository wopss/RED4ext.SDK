#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineStateContextScript : IScriptable
{
    static constexpr const char* NAME = "gamestateMachineStateContextScript";
    static constexpr const char* ALIAS = "StateContext";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MachineStateContextScript, 0x48);
} // namespace game::state
using gamestateMachineStateContextScript = game::state::MachineStateContextScript;
using StateContext = game::state::MachineStateContextScript;
} // namespace RED4ext

// clang-format on
