#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/AnimClip.hpp>

namespace RED4ext
{
namespace work
{
struct MotionAnimClip : work::AnimClip
{
    static constexpr const char* NAME = "workMotionAnimClip";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MotionAnimClip, 0x48);
} // namespace work
using workMotionAnimClip = work::MotionAnimClip;
} // namespace RED4ext

// clang-format on
