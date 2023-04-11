#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace physics
{
struct GeometryKey
{
    static constexpr const char* NAME = "physicsGeometryKey";
    static constexpr const char* ALIAS = NAME;

    NativeArray<uint8_t, 12> ta; // 00
    uint8_t pe; // 0C
    uint8_t unk0D[0x10 - 0xD]; // D
};
RED4EXT_ASSERT_SIZE(GeometryKey, 0x10);
} // namespace physics
using physicsGeometryKey = physics::GeometryKey;
} // namespace RED4ext

// clang-format on
