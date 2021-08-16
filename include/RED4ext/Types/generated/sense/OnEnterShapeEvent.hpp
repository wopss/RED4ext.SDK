#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/sense/VisibilityEvent.hpp>

namespace RED4ext
{
namespace sense { 
struct OnEnterShapeEvent : sense::VisibilityEvent
{
    static constexpr const char* NAME = "senseOnEnterShapeEvent";
    static constexpr const char* ALIAS = "EnterShapeEvent";

};
RED4EXT_ASSERT_SIZE(OnEnterShapeEvent, 0x68);
} // namespace sense
using EnterShapeEvent = sense::OnEnterShapeEvent;
} // namespace RED4ext
