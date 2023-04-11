#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Event.hpp>

namespace RED4ext
{
namespace red { struct Event; }

namespace ink::anim
{
struct ExecuteCodeEventEvent : ink::anim::Event
{
    static constexpr const char* NAME = "inkanimExecuteCodeEventEvent";
    static constexpr const char* ALIAS = NAME;

    Handle<red::Event> eventToExecute; // 48
};
RED4EXT_ASSERT_SIZE(ExecuteCodeEventEvent, 0x58);
} // namespace ink::anim
using inkanimExecuteCodeEventEvent = ink::anim::ExecuteCodeEventEvent;
} // namespace RED4ext

// clang-format on
