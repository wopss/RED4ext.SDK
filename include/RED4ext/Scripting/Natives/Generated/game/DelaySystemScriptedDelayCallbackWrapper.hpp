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
struct DelaySystemScriptedDelayCallbackWrapper : IScriptable
{
    static constexpr const char* NAME = "gameDelaySystemScriptedDelayCallbackWrapper";
    static constexpr const char* ALIAS = "DelayCallback";

};
RED4EXT_ASSERT_SIZE(DelaySystemScriptedDelayCallbackWrapper, 0x40);
} // namespace game
using gameDelaySystemScriptedDelayCallbackWrapper = game::DelaySystemScriptedDelayCallbackWrapper;
using DelayCallback = game::DelaySystemScriptedDelayCallbackWrapper;
} // namespace RED4ext

// clang-format on
