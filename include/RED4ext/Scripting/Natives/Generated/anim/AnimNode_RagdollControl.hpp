#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_RagdollControl : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_RagdollControl";
    static constexpr const char* ALIAS = NAME;

    bool canRequestInertialization; // 48
    uint8_t unk49[0x4C - 0x49]; // 49
    float inertializationBlendDuration; // 4C
    anim::PoseLink inputPoseNode; // 50
    uint8_t unk68[0x78 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AnimNode_RagdollControl, 0x78);
} // namespace anim
} // namespace RED4ext
