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
struct MachineFunctor : IScriptable
{
    static constexpr const char* NAME = "gamestateMachineFunctor";
    static constexpr const char* ALIAS = "StateFunctor";

    uint8_t unk40[0x68 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MachineFunctor, 0x68);
} // namespace game::state
using gamestateMachineFunctor = game::state::MachineFunctor;
using StateFunctor = game::state::MachineFunctor;
} // namespace RED4ext

// clang-format on
