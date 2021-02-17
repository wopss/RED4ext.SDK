#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
namespace physics { 
struct CacheEntry
{
    static constexpr const char* NAME = "physicsCacheEntry";
    static constexpr const char* ALIAS = NAME;

    uint32_t tableIndex; // 00
    uint32_t entryOffset; // 04
    uint32_t entrySize; // 08
};
RED4EXT_ASSERT_SIZE(CacheEntry, 0xC);
} // namespace physics
} // namespace RED4ext
