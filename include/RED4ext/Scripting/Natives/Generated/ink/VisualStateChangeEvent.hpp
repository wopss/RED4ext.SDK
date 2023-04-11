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
struct VisualStateChangeEvent : red::Event
{
    static constexpr const char* NAME = "inkVisualStateChangeEvent";
    static constexpr const char* ALIAS = "VisualStateChangeEvent";

    CName visualState; // 40
};
RED4EXT_ASSERT_SIZE(VisualStateChangeEvent, 0x48);
} // namespace ink
using inkVisualStateChangeEvent = ink::VisualStateChangeEvent;
using VisualStateChangeEvent = ink::VisualStateChangeEvent;
} // namespace RED4ext

// clang-format on
