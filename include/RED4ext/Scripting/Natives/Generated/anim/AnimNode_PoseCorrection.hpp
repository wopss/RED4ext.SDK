#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_PoseCorrection : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_PoseCorrection";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0xB0 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(AnimNode_PoseCorrection, 0xB0);
} // namespace anim
using animAnimNode_PoseCorrection = anim::AnimNode_PoseCorrection;
} // namespace RED4ext

// clang-format on
