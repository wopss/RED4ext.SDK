#pragma once

#include <RED4ext/Common.hpp>
#include <cstdint>

namespace RED4ext
{
struct EngineTime
{
    static constexpr const char* NAME = "EngineTime";
    static constexpr const char* ALIAS = NAME;

    uint64_t ticks; // 00 Elapsed number of ticks dependent on QueryPerformanceFrequency()
};
RED4EXT_ASSERT_SIZE(EngineTime, 0x8);
} // namespace RED4ext
