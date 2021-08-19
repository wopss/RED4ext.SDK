#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world { 
struct GlobalNodeID
{
    static constexpr const char* NAME = "worldGlobalNodeID";
    static constexpr const char* ALIAS = NAME;

    uint64_t hash; // 00
};
RED4EXT_ASSERT_SIZE(GlobalNodeID, 0x8);
} // namespace world
} // namespace RED4ext
