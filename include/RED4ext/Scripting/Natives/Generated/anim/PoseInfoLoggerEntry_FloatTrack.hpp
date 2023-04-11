#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseInfoLoggerEntry.hpp>

namespace RED4ext
{
namespace anim
{
struct PoseInfoLoggerEntry_FloatTrack : anim::PoseInfoLoggerEntry
{
    static constexpr const char* NAME = "animPoseInfoLoggerEntry_FloatTrack";
    static constexpr const char* ALIAS = NAME;

    anim::NamedTrackIndex floatTrack; // 30
    bool showOnlyWhenPositive; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(PoseInfoLoggerEntry_FloatTrack, 0x50);
} // namespace anim
using animPoseInfoLoggerEntry_FloatTrack = anim::PoseInfoLoggerEntry_FloatTrack;
} // namespace RED4ext

// clang-format on
