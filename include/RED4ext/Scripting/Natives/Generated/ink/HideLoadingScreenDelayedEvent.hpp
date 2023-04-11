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
struct HideLoadingScreenDelayedEvent : red::Event
{
    static constexpr const char* NAME = "inkHideLoadingScreenDelayedEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(HideLoadingScreenDelayedEvent, 0x40);
} // namespace ink
using inkHideLoadingScreenDelayedEvent = ink::HideLoadingScreenDelayedEvent;
} // namespace RED4ext

// clang-format on
