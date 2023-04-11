#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SimpleBounceTransformOutput_ChannelEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct SimpleBounceTransformOutput
{
    static constexpr const char* NAME = "animSimpleBounceTransformOutput";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex targetTransform; // 00
    anim::TransformIndex parentTransform; // 18
    anim::TransformChannel targetTransformChannel; // 30
    float multiplier; // 34
    DynArray<anim::SimpleBounceTransformOutput_ChannelEntry> channelEntries; // 38
};
RED4EXT_ASSERT_SIZE(SimpleBounceTransformOutput, 0x48);
} // namespace anim
using animSimpleBounceTransformOutput = anim::SimpleBounceTransformOutput;
} // namespace RED4ext

// clang-format on
