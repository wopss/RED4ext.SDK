#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct CResource;

namespace world { 
struct WorldListResourceEntry
{
    static constexpr const char* NAME = "worldWorldListResourceEntry";
    static constexpr const char* ALIAS = NAME;

    RaRef<CResource> world; // 00
    RaRef<CResource> streamingWorld; // 08
    CString worldName; // 10
};
RED4EXT_ASSERT_SIZE(WorldListResourceEntry, 0x30);
} // namespace world
} // namespace RED4ext
