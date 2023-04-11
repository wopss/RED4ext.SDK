#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace quest
{
struct HUDEntryAnimationFinished
{
    static constexpr const char* NAME = "questHUDEntryAnimationFinished";
    static constexpr const char* ALIAS = NAME;

    CName hudEntry; // 00
    CName animationName; // 08
    bool finished; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(HUDEntryAnimationFinished, 0x18);
} // namespace quest
using questHUDEntryAnimationFinished = quest::HUDEntryAnimationFinished;
} // namespace RED4ext

// clang-format on
