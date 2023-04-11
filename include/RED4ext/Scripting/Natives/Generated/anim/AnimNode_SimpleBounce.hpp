#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SimpleBounceTrackOutput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SimpleBounceTransformOutput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SimpleBounce : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SimpleBounce";
    static constexpr const char* ALIAS = NAME;

    float multiplier; // 60
    float negativeMultiplier; // 64
    float smoothStep; // 68
    float offset; // 6C
    float delay; // 70
    bool areChannelsResaved; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
    anim::TransformIndex startTransform; // 78
    anim::TransformIndex endTransform; // 90
    DynArray<anim::SimpleBounceTransformOutput> transformOutputs; // A8
    DynArray<anim::SimpleBounceTrackOutput> trackOutputs; // B8
    anim::NamedTrackIndex outputDriverTrack; // C8
    bool debug; // E0
    uint8_t unkE1[0xE8 - 0xE1]; // E1
};
RED4EXT_ASSERT_SIZE(AnimNode_SimpleBounce, 0xE8);
} // namespace anim
using animAnimNode_SimpleBounce = anim::AnimNode_SimpleBounce;
} // namespace RED4ext

// clang-format on
