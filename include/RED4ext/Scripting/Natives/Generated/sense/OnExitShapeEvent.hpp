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
struct OnExitShapeEvent : sense::VisibilityEvent
{
    static constexpr const char* NAME = "senseOnExitShapeEvent";
    static constexpr const char* ALIAS = "ExitShapeEvent";

};
RED4EXT_ASSERT_SIZE(OnExitShapeEvent, 0x68);
} // namespace sense
using senseOnExitShapeEvent = sense::OnExitShapeEvent;
using ExitShapeEvent = sense::OnExitShapeEvent;
} // namespace RED4ext

// clang-format on
