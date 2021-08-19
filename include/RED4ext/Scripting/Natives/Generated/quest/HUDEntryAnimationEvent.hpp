#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace quest { 
struct HUDEntryAnimationEvent
{
    static constexpr const char* NAME = "questHUDEntryAnimationEvent";
    static constexpr const char* ALIAS = NAME;

    CName hudEntry; // 00
    CName animationName; // 08
    bool dependsOnTimeDilation; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(HUDEntryAnimationEvent, 0x18);
} // namespace quest
} // namespace RED4ext
