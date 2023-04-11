#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace sense
{
struct EnabledEvent : red::Event
{
    static constexpr const char* NAME = "senseEnabledEvent";
    static constexpr const char* ALIAS = "SenseEnabledEvent";

    bool isEnabled; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(EnabledEvent, 0x48);
} // namespace sense
using senseEnabledEvent = sense::EnabledEvent;
using SenseEnabledEvent = sense::EnabledEvent;
} // namespace RED4ext

// clang-format on
