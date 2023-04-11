#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformChannel.hpp>

namespace RED4ext
{
namespace anim
{
struct SimpleBounceTransformOutput_ChannelEntry
{
    static constexpr const char* NAME = "animSimpleBounceTransformOutput_ChannelEntry";
    static constexpr const char* ALIAS = NAME;

    anim::TransformChannel transformChannel; // 00
    float multiplier; // 04
};
RED4EXT_ASSERT_SIZE(SimpleBounceTransformOutput_ChannelEntry, 0x8);
} // namespace anim
using animSimpleBounceTransformOutput_ChannelEntry = anim::SimpleBounceTransformOutput_ChannelEntry;
} // namespace RED4ext

// clang-format on
