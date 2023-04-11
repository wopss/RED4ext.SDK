#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_IntValue.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_IntConstant : anim::AnimNode_IntValue
{
    static constexpr const char* NAME = "animAnimNode_IntConstant";
    static constexpr const char* ALIAS = NAME;

    int32_t value; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(AnimNode_IntConstant, 0x50);
} // namespace anim
using animAnimNode_IntConstant = anim::AnimNode_IntConstant;
} // namespace RED4ext

// clang-format on
