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
struct AnimNode_ForegroundSegmentBegin : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_ForegroundSegmentBegin";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0x68 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(AnimNode_ForegroundSegmentBegin, 0x68);
} // namespace anim
using animAnimNode_ForegroundSegmentBegin = anim::AnimNode_ForegroundSegmentBegin;
} // namespace RED4ext

// clang-format on
