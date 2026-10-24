#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct CallbackSystemEvent : IScriptable
{
    static constexpr const char* NAME = "gameCallbackSystemEvent";
    static constexpr const char* ALIAS = "CallbackSystemEvent";

    CName eventName; // 40
};
RED4EXT_ASSERT_SIZE(CallbackSystemEvent, 0x48);
} // namespace game
using gameCallbackSystemEvent = game::CallbackSystemEvent;
using CallbackSystemEvent = game::CallbackSystemEvent;
} // namespace RED4ext

// clang-format on
