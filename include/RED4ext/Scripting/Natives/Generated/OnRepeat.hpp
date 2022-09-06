#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/PointerEvent.hpp>

namespace RED4ext
{
struct OnRepeat : ink::PointerEvent
{
    static constexpr const char* NAME = "OnRepeat";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(OnRepeat, 0xA8);
} // namespace RED4ext

// clang-format on
