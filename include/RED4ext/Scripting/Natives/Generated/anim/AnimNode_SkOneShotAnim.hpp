#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkAnim.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SkOneShotAnim : anim::AnimNode_SkAnim
{
    static constexpr const char* NAME = "animAnimNode_SkOneShotAnim";
    static constexpr const char* ALIAS = NAME;

    float blendIn; // D0
    float blendOut; // D4
    uint8_t unkD8[0xE8 - 0xD8]; // D8
    anim::PoseLink Input; // E8
};
RED4EXT_ASSERT_SIZE(AnimNode_SkOneShotAnim, 0x100);
} // namespace anim
using animAnimNode_SkOneShotAnim = anim::AnimNode_SkOneShotAnim;
} // namespace RED4ext

// clang-format on
