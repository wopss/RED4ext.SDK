#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace world { 
struct CrowdNullAreaCollisionHeader
{
    static constexpr const char* NAME = "worldCrowdNullAreaCollisionHeader";
    static constexpr const char* ALIAS = NAME;

    Vector3 direction; // 00
    float speed; // 0C
    float radius; // 10
    uint8_t flags; // 14
    uint8_t unk15[0x18 - 0x15]; // 15
    uint64_t userData; // 18
};
RED4EXT_ASSERT_SIZE(CrowdNullAreaCollisionHeader, 0x20);
} // namespace world
} // namespace RED4ext
