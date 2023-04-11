#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SimpleBounceTrackOutput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SimpleBounceTransformOutput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct SimpleBounce_JsonProperties : ISerializable
{
    static constexpr const char* NAME = "animSimpleBounce_JsonProperties";
    static constexpr const char* ALIAS = NAME;

    float multiplier; // 30
    float negativeMultiplier; // 34
    float smoothStep; // 38
    float offset; // 3C
    float delay; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    anim::TransformIndex startTransform; // 48
    anim::TransformIndex endTransform; // 60
    DynArray<anim::SimpleBounceTransformOutput> transformOutputs; // 78
    DynArray<anim::SimpleBounceTrackOutput> trackOutputs; // 88
    anim::NamedTrackIndex outputDriverTrack; // 98
};
RED4EXT_ASSERT_SIZE(SimpleBounce_JsonProperties, 0xB0);
} // namespace anim
using animSimpleBounce_JsonProperties = anim::SimpleBounce_JsonProperties;
} // namespace RED4ext

// clang-format on
