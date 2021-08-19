#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace physics { 
struct CacheEntry
{
    static constexpr const char* NAME = "physicsCacheEntry";
    static constexpr const char* ALIAS = NAME;

    uint32_t entryOffset; // 00
    uint32_t entrySize; // 04
};
RED4EXT_ASSERT_SIZE(CacheEntry, 0x8);
} // namespace physics
} // namespace RED4ext
