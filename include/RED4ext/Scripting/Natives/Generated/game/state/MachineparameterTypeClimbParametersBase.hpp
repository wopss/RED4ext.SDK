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
struct __declspec(align(0x10)) MachineparameterTypeClimbParametersBase : IScriptable
{
    static constexpr const char* NAME = "gamestateMachineparameterTypeClimbParametersBase";
    static constexpr const char* ALIAS = "ClimbParametersBase";

    uint8_t unk40[0xF0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MachineparameterTypeClimbParametersBase, 0xF0);
} // namespace game::state
using gamestateMachineparameterTypeClimbParametersBase = game::state::MachineparameterTypeClimbParametersBase;
using ClimbParametersBase = game::state::MachineparameterTypeClimbParametersBase;
} // namespace RED4ext

// clang-format on
