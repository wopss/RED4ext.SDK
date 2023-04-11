#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/GeometryKey.hpp>

namespace RED4ext
{
namespace physics
{
struct CacheKey
{
    static constexpr const char* NAME = "physicsCacheKey";
    static constexpr const char* ALIAS = NAME;

    physics::GeometryKey key; // 00
    uint32_t entryIndex; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(CacheKey, 0x18);
} // namespace physics
using physicsCacheKey = physics::CacheKey;
} // namespace RED4ext

// clang-format on
