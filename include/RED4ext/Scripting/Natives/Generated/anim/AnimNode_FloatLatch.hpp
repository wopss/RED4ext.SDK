#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FloatLatch : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_FloatLatch";
    static constexpr const char* ALIAS = NAME;

    anim::FloatLink input; // 48
    uint8_t unk68[0x78 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatLatch, 0x78);
} // namespace anim
using animAnimNode_FloatLatch = anim::AnimNode_FloatLatch;
} // namespace RED4ext

// clang-format on
