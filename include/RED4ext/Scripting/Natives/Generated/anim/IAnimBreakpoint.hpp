#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct IAnimBreakpoint
{
    static constexpr const char* NAME = "animIAnimBreakpoint";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    bool enabled; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(IAnimBreakpoint, 0x10);
} // namespace anim
using animIAnimBreakpoint = anim::IAnimBreakpoint;
} // namespace RED4ext

// clang-format on
