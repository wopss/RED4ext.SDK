#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct TransformMask
{
    static constexpr const char* NAME = "animTransformMask";
    static constexpr const char* ALIAS = NAME;

    int32_t index; // 00
    float weight; // 04
};
RED4EXT_ASSERT_SIZE(TransformMask, 0x8);
} // namespace anim
using animTransformMask = anim::TransformMask;
} // namespace RED4ext

// clang-format on
