#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/FocusEvent.hpp>

namespace RED4ext
{
struct OnFocusReceived : ink::FocusEvent
{
    static constexpr const char* NAME = "OnFocusReceived";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(OnFocusReceived, 0x70);
} // namespace RED4ext

// clang-format on
