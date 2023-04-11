#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/Axis.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct TwistOutput
{
    static constexpr const char* NAME = "animTwistOutput";
    static constexpr const char* ALIAS = NAME;

    float positiveScale; // 00
    float negativeScale; // 04
    anim::Axis twistAxis; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    anim::TransformIndex twistedTransform; // 10
    anim::NamedTrackIndex outputAngleTrack; // 28
};
RED4EXT_ASSERT_SIZE(TwistOutput, 0x40);
} // namespace anim
using animTwistOutput = anim::TwistOutput;
} // namespace RED4ext

// clang-format on
