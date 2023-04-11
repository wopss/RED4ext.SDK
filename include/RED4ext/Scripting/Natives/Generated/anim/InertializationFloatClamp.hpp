#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct InertializationFloatClamp
{
    static constexpr const char* NAME = "animInertializationFloatClamp";
    static constexpr const char* ALIAS = NAME;

    bool isActive; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    float min; // 04
    float max; // 08
};
RED4EXT_ASSERT_SIZE(InertializationFloatClamp, 0xC);
} // namespace anim
using animInertializationFloatClamp = anim::InertializationFloatClamp;
} // namespace RED4ext

// clang-format on
