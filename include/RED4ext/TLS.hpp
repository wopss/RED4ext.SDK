#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct TLS
{
    static TLS* Get();

    uint8_t unk00[0x19A]; // 00
    uint8_t jobParam;     // 19A
};

RED4EXT_ASSERT_SIZE(TLS, 0x19B);
RED4EXT_ASSERT_OFFSET(TLS, jobParam, 0x19A);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/TLS-inl.hpp>
#endif
