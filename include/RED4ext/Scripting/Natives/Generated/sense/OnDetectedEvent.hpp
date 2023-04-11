#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/sense/VisibilityEvent.hpp>

namespace RED4ext
{
namespace sense
{
struct OnDetectedEvent : sense::VisibilityEvent
{
    static constexpr const char* NAME = "senseOnDetectedEvent";
    static constexpr const char* ALIAS = "OnDetectedEvent";

};
RED4EXT_ASSERT_SIZE(OnDetectedEvent, 0x68);
} // namespace sense
using senseOnDetectedEvent = sense::OnDetectedEvent;
using OnDetectedEvent = sense::OnDetectedEvent;
} // namespace RED4ext

// clang-format on
