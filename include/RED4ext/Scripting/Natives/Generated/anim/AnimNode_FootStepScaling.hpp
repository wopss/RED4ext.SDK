#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/fss/BodyOfflineParams.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FootStepScaling : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_FootStepScaling";
    static constexpr const char* ALIAS = NAME;

    anim::FloatLink inputSpeed; // 60
    anim::FloatLink weight; // 80
    anim::TransformIndex hipsIndex; // A0
    anim::TransformIndex leftFootIKIndex; // B8
    anim::TransformIndex rightFootIKIndex; // D0
    anim::fss::BodyOfflineParams Params; // E8
    uint8_t unk104[0x108 - 0x104]; // 104
};
RED4EXT_ASSERT_SIZE(AnimNode_FootStepScaling, 0x108);
} // namespace anim
using animAnimNode_FootStepScaling = anim::AnimNode_FootStepScaling;
} // namespace RED4ext

// clang-format on
