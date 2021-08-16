#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/Box.hpp>
#include <RED4ext/Types/generated/Transform.hpp>

namespace RED4ext
{
namespace world { 
struct DbgOverlapBox
{
    static constexpr const char* NAME = "worldDbgOverlapBox";
    static constexpr const char* ALIAS = NAME;

    Box box; // 00
    Transform transform; // 20
    uint32_t level; // 40
    bool isHit; // 44
    uint8_t unk45[0x50 - 0x45]; // 45
};
RED4EXT_ASSERT_SIZE(DbgOverlapBox, 0x50);
} // namespace world
} // namespace RED4ext
