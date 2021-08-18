#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Event.hpp>

namespace RED4ext
{
namespace ink::anim { 
struct MarkerEvent : ink::anim::Event
{
    static constexpr const char* NAME = "inkanimMarkerEvent";
    static constexpr const char* ALIAS = NAME;

    CName markerName; // 48
};
RED4EXT_ASSERT_SIZE(MarkerEvent, 0x50);
} // namespace ink::anim
} // namespace RED4ext
