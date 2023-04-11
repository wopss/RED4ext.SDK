#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EAnimGraphAdditiveType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EBlendTracksMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SharedMetaPoseAdditive : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SharedMetaPoseAdditive";
    static constexpr const char* ALIAS = NAME;

    anim::FloatLink weightLink; // 60
    anim::EAnimGraphAdditiveType additiveType; // 80
    anim::EBlendTracksMode blendTracks; // 84
    bool convertParentPoseToAdditive; // 88
    uint8_t unk89[0x90 - 0x89]; // 89
};
RED4EXT_ASSERT_SIZE(AnimNode_SharedMetaPoseAdditive, 0x90);
} // namespace anim
using animAnimNode_SharedMetaPoseAdditive = anim::AnimNode_SharedMetaPoseAdditive;
} // namespace RED4ext

// clang-format on
