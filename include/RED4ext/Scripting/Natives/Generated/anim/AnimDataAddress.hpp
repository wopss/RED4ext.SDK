#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimDataAddress
{
    static constexpr const char* NAME = "animAnimDataAddress";
    static constexpr const char* ALIAS = NAME;

    uint32_t unkIndex; // 00
    uint32_t fsetInBytes; // 04
    uint32_t zeInBytes; // 08
};
RED4EXT_ASSERT_SIZE(AnimDataAddress, 0xC);
} // namespace anim
using animAnimDataAddress = anim::AnimDataAddress;
} // namespace RED4ext

// clang-format on
