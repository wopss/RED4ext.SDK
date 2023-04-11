#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace quest { struct ObjectInspectListener; }

namespace quest
{
struct InspectListenerEvent : red::Event
{
    static constexpr const char* NAME = "questInspectListenerEvent";
    static constexpr const char* ALIAS = "InspectListenerEvent";

    Handle<quest::ObjectInspectListener> listener; // 40
    bool register_; // 50 -- register
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(InspectListenerEvent, 0x58);
} // namespace quest
using questInspectListenerEvent = quest::InspectListenerEvent;
using InspectListenerEvent = quest::InspectListenerEvent;
} // namespace RED4ext

// clang-format on
