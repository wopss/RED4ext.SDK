#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ink { 
struct KeyBindingEvent : red::Event
{
    static constexpr const char* NAME = "inkKeyBindingEvent";
    static constexpr const char* ALIAS = "KeyBindingEvent";

    CName keyName; // 40
};
RED4EXT_ASSERT_SIZE(KeyBindingEvent, 0x48);
} // namespace ink
using KeyBindingEvent = ink::KeyBindingEvent;
} // namespace RED4ext
