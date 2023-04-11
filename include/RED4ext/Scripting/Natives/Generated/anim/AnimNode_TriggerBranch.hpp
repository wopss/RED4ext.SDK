#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_TriggerBranch : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_TriggerBranch";
    static constexpr const char* ALIAS = NAME;

    anim::PoseLink base; // 48
    anim::PoseLink overlay; // 60
    float blendIn; // 78
    float blendOut; // 7C
    CName startEvent; // 80
    CName endEvent; // 88
    float cooldown; // 90
    uint8_t unk94[0xD8 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(AnimNode_TriggerBranch, 0xD8);
} // namespace anim
using animAnimNode_TriggerBranch = anim::AnimNode_TriggerBranch;
} // namespace RED4ext

// clang-format on
