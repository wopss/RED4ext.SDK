#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Event.hpp>

namespace RED4ext
{
namespace ink
{
struct InputEvent : ink::Event
{
    static constexpr const char* NAME = "inkInputEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0x90 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(InputEvent, 0x90);
} // namespace ink
using inkInputEvent = ink::InputEvent;
} // namespace RED4ext

// clang-format on
