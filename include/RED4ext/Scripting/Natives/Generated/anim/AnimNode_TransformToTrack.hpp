#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_TransformToTrack : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_TransformToTrack";
    static constexpr const char* ALIAS = NAME;

    int32_t floatTrack; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    anim::NamedTrackIndex floatTrackIndex; // 68
    int16_t outputTransform; // 80
    uint8_t unk82[0x88 - 0x82]; // 82
    anim::TransformIndex transformIndex; // 88
    float mulFactor; // A0
    anim::TransformChannel channel; // A4
    float weight; // A8
    uint8_t unkAC[0xD0 - 0xAC]; // AC
    anim::FloatLink weightNode; // D0
    anim::FloatLink mulFactorNode; // F0
};
RED4EXT_ASSERT_SIZE(AnimNode_TransformToTrack, 0x110);
} // namespace anim
using animAnimNode_TransformToTrack = anim::AnimNode_TransformToTrack;
} // namespace RED4ext

// clang-format on
