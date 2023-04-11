#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct SimpleBounceTrackOutput
{
    static constexpr const char* NAME = "animSimpleBounceTrackOutput";
    static constexpr const char* ALIAS = NAME;

    anim::NamedTrackIndex targetTrack; // 00
    float multiplier; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(SimpleBounceTrackOutput, 0x20);
} // namespace anim
using animSimpleBounceTrackOutput = anim::SimpleBounceTrackOutput;
} // namespace RED4ext

// clang-format on
