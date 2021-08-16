#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace net { 
struct Time
{
    static constexpr const char* NAME = "netTime";
    static constexpr const char* ALIAS = NAME;

    uint64_t milliSecs; // 00
};
RED4EXT_ASSERT_SIZE(Time, 0x8);
} // namespace net
} // namespace RED4ext
