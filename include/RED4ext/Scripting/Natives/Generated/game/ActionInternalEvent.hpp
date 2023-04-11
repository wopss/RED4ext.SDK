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
struct ActionInternalEvent : IScriptable
{
    static constexpr const char* NAME = "gameActionInternalEvent";
    static constexpr const char* ALIAS = "ActionInternalEvent";

};
RED4EXT_ASSERT_SIZE(ActionInternalEvent, 0x40);
} // namespace game
using gameActionInternalEvent = game::ActionInternalEvent;
using ActionInternalEvent = game::ActionInternalEvent;
} // namespace RED4ext

// clang-format on
