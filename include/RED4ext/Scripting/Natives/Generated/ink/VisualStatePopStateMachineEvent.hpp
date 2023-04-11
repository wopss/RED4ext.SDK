#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ink
{
struct VisualStatePopStateMachineEvent : red::Event
{
    static constexpr const char* NAME = "inkVisualStatePopStateMachineEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(VisualStatePopStateMachineEvent, 0x48);
} // namespace ink
using inkVisualStatePopStateMachineEvent = ink::VisualStatePopStateMachineEvent;
} // namespace RED4ext

// clang-format on
