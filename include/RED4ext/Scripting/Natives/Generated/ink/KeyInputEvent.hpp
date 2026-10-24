#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EInputAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/EInputKey.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/InputEvent.hpp>

namespace RED4ext
{
namespace ink
{
struct KeyInputEvent : ink::InputEvent
{
    static constexpr const char* NAME = "inkKeyInputEvent";
    static constexpr const char* ALIAS = NAME;

    EInputKey key; // 90
    EInputAction action; // 94
    CString character; // 98
};
RED4EXT_ASSERT_SIZE(KeyInputEvent, 0xB8);
} // namespace ink
using inkKeyInputEvent = ink::KeyInputEvent;
} // namespace RED4ext

// clang-format on
