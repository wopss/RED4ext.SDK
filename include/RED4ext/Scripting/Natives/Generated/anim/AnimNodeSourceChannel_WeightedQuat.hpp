#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>

namespace RED4ext
{
namespace anim { struct IAnimNodeSourceChannel_Quat; }

namespace anim
{
struct AnimNodeSourceChannel_WeightedQuat : ISerializable
{
    static constexpr const char* NAME = "animAnimNodeSourceChannel_WeightedQuat";
    static constexpr const char* ALIAS = NAME;

    Handle<anim::IAnimNodeSourceChannel_Quat> channel; // 30
    float weight; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    anim::FloatLink weightLink; // 48
    anim::NamedTrackIndex weightFloatTrack; // 68
};
RED4EXT_ASSERT_SIZE(AnimNodeSourceChannel_WeightedQuat, 0x80);
} // namespace anim
using animAnimNodeSourceChannel_WeightedQuat = anim::AnimNodeSourceChannel_WeightedQuat;
} // namespace RED4ext

// clang-format on
