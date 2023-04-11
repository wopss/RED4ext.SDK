#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ink
{
struct VisualStateRestorePreviousEvent : red::Event
{
    static constexpr const char* NAME = "inkVisualStateRestorePreviousEvent";
    static constexpr const char* ALIAS = "VisualStateRestorePreviousEvent";

    CName visualState; // 40
};
RED4EXT_ASSERT_SIZE(VisualStateRestorePreviousEvent, 0x48);
} // namespace ink
using inkVisualStateRestorePreviousEvent = ink::VisualStateRestorePreviousEvent;
using VisualStateRestorePreviousEvent = ink::VisualStateRestorePreviousEvent;
} // namespace RED4ext

// clang-format on
