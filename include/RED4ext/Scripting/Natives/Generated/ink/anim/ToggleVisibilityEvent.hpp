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
struct ToggleVisibilityEvent : ink::anim::Event
{
    static constexpr const char* NAME = "inkanimToggleVisibilityEvent";
    static constexpr const char* ALIAS = "inkAnimToggleVisibilityEvent";

};
RED4EXT_ASSERT_SIZE(ToggleVisibilityEvent, 0x48);
} // namespace ink::anim
using inkanimToggleVisibilityEvent = ink::anim::ToggleVisibilityEvent;
using inkAnimToggleVisibilityEvent = ink::anim::ToggleVisibilityEvent;
} // namespace RED4ext

// clang-format on
