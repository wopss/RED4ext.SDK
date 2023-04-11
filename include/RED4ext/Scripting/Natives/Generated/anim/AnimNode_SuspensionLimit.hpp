#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/Axis.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SuspensionLimit : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SuspensionLimit";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex constrainedTransform; // 60
    anim::NamedTrackIndex radiusTrack; // 78
    anim::NamedTrackIndex deviationTrack; // 90
    anim::Axis axis; // A8
    uint8_t unkAC[0xB0 - 0xAC]; // AC
};
RED4EXT_ASSERT_SIZE(AnimNode_SuspensionLimit, 0xB0);
} // namespace anim
using animAnimNode_SuspensionLimit = anim::AnimNode_SuspensionLimit;
} // namespace RED4ext

// clang-format on
