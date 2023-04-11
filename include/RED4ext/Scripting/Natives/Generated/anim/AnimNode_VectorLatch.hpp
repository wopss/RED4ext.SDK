#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_VectorValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_VectorLatch : anim::AnimNode_VectorValue
{
    static constexpr const char* NAME = "animAnimNode_VectorLatch";
    static constexpr const char* ALIAS = NAME;

    anim::VectorLink input; // 48
    uint8_t unk68[0x78 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AnimNode_VectorLatch, 0x78);
} // namespace anim
using animAnimNode_VectorLatch = anim::AnimNode_VectorLatch;
} // namespace RED4ext

// clang-format on
