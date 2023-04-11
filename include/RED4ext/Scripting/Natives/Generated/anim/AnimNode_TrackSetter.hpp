#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_TrackSetter : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_TrackSetter";
    static constexpr const char* ALIAS = NAME;

    anim::NamedTrackIndex track; // 60
    anim::FloatLink value; // 78
};
RED4EXT_ASSERT_SIZE(AnimNode_TrackSetter, 0x98);
} // namespace anim
using animAnimNode_TrackSetter = anim::AnimNode_TrackSetter;
} // namespace RED4ext

// clang-format on
