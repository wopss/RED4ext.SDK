#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkAnim.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SkAnimSlot : anim::AnimNode_SkAnim
{
    static constexpr const char* NAME = "animAnimNode_SkAnimSlot";
    static constexpr const char* ALIAS = NAME;

    bool forFacialIdle; // D0
    uint8_t unkD1[0xF8 - 0xD1]; // D1
};
RED4EXT_ASSERT_SIZE(AnimNode_SkAnimSlot, 0xF8);
} // namespace anim
using animAnimNode_SkAnimSlot = anim::AnimNode_SkAnimSlot;
} // namespace RED4ext

// clang-format on
