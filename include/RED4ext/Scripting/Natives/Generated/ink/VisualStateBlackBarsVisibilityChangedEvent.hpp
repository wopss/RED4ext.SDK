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
struct VisualStateBlackBarsVisibilityChangedEvent : red::Event
{
    static constexpr const char* NAME = "inkVisualStateBlackBarsVisibilityChangedEvent";
    static constexpr const char* ALIAS = "VisualStateBlackBarsVisibilityChangedEvent";

    bool blackBarsVisible; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(VisualStateBlackBarsVisibilityChangedEvent, 0x48);
} // namespace ink
using inkVisualStateBlackBarsVisibilityChangedEvent = ink::VisualStateBlackBarsVisibilityChangedEvent;
using VisualStateBlackBarsVisibilityChangedEvent = ink::VisualStateBlackBarsVisibilityChangedEvent;
} // namespace RED4ext

// clang-format on
