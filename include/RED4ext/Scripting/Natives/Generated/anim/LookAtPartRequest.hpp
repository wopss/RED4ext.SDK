#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace anim
{
struct LookAtPartRequest
{
    static constexpr const char* NAME = "animLookAtPartRequest";
    static constexpr const char* ALIAS = "LookAtPartRequest";

    CName partName; // 00
    float weight; // 08
    float suppress; // 0C
    int32_t mode; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(LookAtPartRequest, 0x18);
} // namespace anim
using animLookAtPartRequest = anim::LookAtPartRequest;
using LookAtPartRequest = anim::LookAtPartRequest;
} // namespace RED4ext

// clang-format on
