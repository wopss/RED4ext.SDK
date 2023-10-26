#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) CFrustum
{
    static constexpr const char* NAME = "CFrustum";
    static constexpr const char* ALIAS = "Frustum";

    uint8_t unk00[0xC0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(CFrustum, 0xC0);
using Frustum = CFrustum;
} // namespace RED4ext

// clang-format on
