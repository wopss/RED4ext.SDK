#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct CFrustum
{
    static constexpr const char* NAME = "CFrustum";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0xC0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(CFrustum, 0xC0);
} // namespace RED4ext
