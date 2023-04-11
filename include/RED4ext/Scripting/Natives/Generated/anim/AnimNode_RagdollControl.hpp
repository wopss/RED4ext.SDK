#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_RagdollControl : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_RagdollControl";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x58 - 0x48]; // 48
    float blendInDuration; // 58
    float blendOutDuration; // 5C
    anim::PoseLink inputPoseNode; // 60
    uint8_t unk78[0xE8 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(AnimNode_RagdollControl, 0xE8);
} // namespace anim
using animAnimNode_RagdollControl = anim::AnimNode_RagdollControl;
} // namespace RED4ext

// clang-format on
