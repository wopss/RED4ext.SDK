#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct TLS
{
    static TLS* Get();

    uint8_t unk00[0x14A]; // 00
    uint8_t jobParam;     // 14A
};

RED4EXT_ASSERT_SIZE(TLS, 0x14B);
RED4EXT_ASSERT_OFFSET(TLS, jobParam, 0x14A);
} // namespace RED4ext
