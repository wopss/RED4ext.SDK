#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SelectiveJoin : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SelectiveJoin";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0x80 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(AnimNode_SelectiveJoin, 0x80);
} // namespace anim
using animAnimNode_SelectiveJoin = anim::AnimNode_SelectiveJoin;
} // namespace RED4ext

// clang-format on
