#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_TransformValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_TransformJoin : anim::AnimNode_TransformValue
{
    static constexpr const char* NAME = "animAnimNode_TransformJoin";
    static constexpr const char* ALIAS = NAME;

    anim::TransformLink input; // 48
    uint8_t unk68[0x88 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AnimNode_TransformJoin, 0x88);
} // namespace anim
using animAnimNode_TransformJoin = anim::AnimNode_TransformJoin;
} // namespace RED4ext

// clang-format on
