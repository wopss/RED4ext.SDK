#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct MotionWrapper
{
    static constexpr const char* NAME = "animMotionWrapper";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x18 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(MotionWrapper, 0x18);
} // namespace anim
using animMotionWrapper = anim::MotionWrapper;
} // namespace RED4ext

// clang-format on
