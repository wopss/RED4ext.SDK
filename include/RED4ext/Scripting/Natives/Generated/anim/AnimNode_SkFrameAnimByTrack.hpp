#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkFrameAnim.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SkFrameAnimByTrack : anim::AnimNode_SkFrameAnim
{
    static constexpr const char* NAME = "animAnimNode_SkFrameAnimByTrack";
    static constexpr const char* ALIAS = NAME;

    anim::NamedTrackIndex progressFloatTrack; // 138
    anim::NamedTrackIndex timeFloatTrack; // 150
    anim::NamedTrackIndex frameFloatTrack; // 168
    anim::PoseLink inputWithTracks; // 180
};
RED4EXT_ASSERT_SIZE(AnimNode_SkFrameAnimByTrack, 0x198);
} // namespace anim
using animAnimNode_SkFrameAnimByTrack = anim::AnimNode_SkFrameAnimByTrack;
} // namespace RED4ext

// clang-format on
