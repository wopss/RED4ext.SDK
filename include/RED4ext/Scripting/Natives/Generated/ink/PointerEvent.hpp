#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/InputEvent.hpp>

namespace RED4ext
{
namespace ink
{
struct PointerEvent : ink::InputEvent
{
    static constexpr const char* NAME = "inkPointerEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0xA8 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(PointerEvent, 0xA8);
} // namespace ink
using inkPointerEvent = ink::PointerEvent;
} // namespace RED4ext

// clang-format on
