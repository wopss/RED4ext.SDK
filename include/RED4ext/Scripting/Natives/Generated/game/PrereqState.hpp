#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct PrereqState : IScriptable
{
    static constexpr const char* NAME = "gamePrereqState";
    static constexpr const char* ALIAS = "PrereqState";

    uint8_t unk40[0xC0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PrereqState, 0xC0);
} // namespace game
using gamePrereqState = game::PrereqState;
using PrereqState = game::PrereqState;
} // namespace RED4ext

// clang-format on
