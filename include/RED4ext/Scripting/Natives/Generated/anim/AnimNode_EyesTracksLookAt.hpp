#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_EyesTracksLookAt : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_EyesTracksLookAt";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex eyeTransform; // 60
    anim::NamedTrackIndex leftTrack; // 78
    anim::NamedTrackIndex rightTrack; // 90
    anim::NamedTrackIndex upTrack; // A8
    anim::NamedTrackIndex downTrack; // C0
    bool debug; // D8
    uint8_t unkD9[0xE0 - 0xD9]; // D9
};
RED4EXT_ASSERT_SIZE(AnimNode_EyesTracksLookAt, 0xE0);
} // namespace anim
using animAnimNode_EyesTracksLookAt = anim::AnimNode_EyesTracksLookAt;
} // namespace RED4ext

// clang-format on
