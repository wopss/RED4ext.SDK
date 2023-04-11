#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Event.hpp>

namespace RED4ext
{
namespace ink::anim
{
struct StopVideoEvent : ink::anim::Event
{
    static constexpr const char* NAME = "inkanimStopVideoEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StopVideoEvent, 0x48);
} // namespace ink::anim
using inkanimStopVideoEvent = ink::anim::StopVideoEvent;
} // namespace RED4ext

// clang-format on
