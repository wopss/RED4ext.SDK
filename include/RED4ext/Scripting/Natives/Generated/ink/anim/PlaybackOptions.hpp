#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/LoopType.hpp>

namespace RED4ext
{
namespace ink::anim
{
struct PlaybackOptions
{
    static constexpr const char* NAME = "inkanimPlaybackOptions";
    static constexpr const char* ALIAS = "inkAnimOptions";

    bool playReversed; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    float executionDelay; // 04
    ink::anim::LoopType loopType; // 08
    uint8_t unk09[0xC - 0x9]; // 9
    uint32_t loopCounter; // 0C
    bool loopInfinite; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
    CName fromMarker; // 18
    CName toMarker; // 20
    bool oneSegment; // 28
    bool dependsOnTimeDilation; // 29
    bool applyCustomTimeDilation; // 2A
    uint8_t unk2B[0x2C - 0x2B]; // 2B
    float customTimeDilation; // 2C
};
RED4EXT_ASSERT_SIZE(PlaybackOptions, 0x30);
} // namespace ink::anim
using inkanimPlaybackOptions = ink::anim::PlaybackOptions;
using inkAnimOptions = ink::anim::PlaybackOptions;
} // namespace RED4ext

// clang-format on
