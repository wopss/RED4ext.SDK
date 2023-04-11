#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimNodeSourceChannel_Float.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNodeSourceChannel_FloatTrack : anim::IAnimNodeSourceChannel_Float
{
    static constexpr const char* NAME = "animAnimNodeSourceChannel_FloatTrack";
    static constexpr const char* ALIAS = NAME;

    anim::NamedTrackIndex floatTrack; // 30
    bool useComplementValue; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(AnimNodeSourceChannel_FloatTrack, 0x50);
} // namespace anim
using animAnimNodeSourceChannel_FloatTrack = anim::AnimNodeSourceChannel_FloatTrack;
} // namespace RED4ext

// clang-format on
