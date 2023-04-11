#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct FloatClamp
{
    static constexpr const char* NAME = "animFloatClamp";
    static constexpr const char* ALIAS = NAME;

    bool useMin; // 00
    bool useMax; // 01
    uint8_t unk02[0x4 - 0x2]; // 2
    float min; // 04
    float max; // 08
};
RED4EXT_ASSERT_SIZE(FloatClamp, 0xC);
} // namespace anim
using animFloatClamp = anim::FloatClamp;
} // namespace RED4ext

// clang-format on
