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
struct FocusEvent : ink::Event
{
    static constexpr const char* NAME = "inkFocusEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0x70 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(FocusEvent, 0x70);
} // namespace ink
using inkFocusEvent = ink::FocusEvent;
} // namespace RED4ext

// clang-format on
