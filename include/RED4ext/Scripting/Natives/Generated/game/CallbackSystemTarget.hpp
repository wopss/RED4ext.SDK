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
struct CallbackSystemTarget : IScriptable
{
    static constexpr const char* NAME = "gameCallbackSystemTarget";
    static constexpr const char* ALIAS = "CallbackSystemTarget";

};
RED4EXT_ASSERT_SIZE(CallbackSystemTarget, 0x40);
} // namespace game
using gameCallbackSystemTarget = game::CallbackSystemTarget;
using CallbackSystemTarget = game::CallbackSystemTarget;
} // namespace RED4ext

// clang-format on
