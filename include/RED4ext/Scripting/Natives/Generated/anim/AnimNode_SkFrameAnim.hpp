#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkAnim.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SkFrameAnim : anim::AnimNode_SkAnim
{
    static constexpr const char* NAME = "animAnimNode_SkFrameAnim";
    static constexpr const char* ALIAS = NAME;

    anim::FloatLink progressLink; // D0
    anim::FloatLink timeLink; // F0
    anim::FloatLink frameLink; // 110
    bool fireAnimEndOnceOnAnimEnd; // 130
    uint8_t unk131[0x138 - 0x131]; // 131
};
RED4EXT_ASSERT_SIZE(AnimNode_SkFrameAnim, 0x138);
} // namespace anim
using animAnimNode_SkFrameAnim = anim::AnimNode_SkFrameAnim;
} // namespace RED4ext

// clang-format on
