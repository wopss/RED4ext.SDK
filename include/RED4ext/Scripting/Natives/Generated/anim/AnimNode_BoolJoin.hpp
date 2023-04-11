#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_BoolValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/BoolLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_BoolJoin : anim::AnimNode_BoolValue
{
    static constexpr const char* NAME = "animAnimNode_BoolJoin";
    static constexpr const char* ALIAS = NAME;

    anim::BoolLink input; // 48
    uint8_t unk68[0x88 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AnimNode_BoolJoin, 0x88);
} // namespace anim
using animAnimNode_BoolJoin = anim::AnimNode_BoolJoin;
} // namespace RED4ext

// clang-format on
