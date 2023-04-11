#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficCollisionSphere
{
    static constexpr const char* NAME = "worldTrafficCollisionSphere";
    static constexpr const char* ALIAS = NAME;

    Vector3 worldPos; // 00
    Vector3 direction; // 0C
    uint8_t unk18[0x1C - 0x18]; // 18
    float radius; // 1C
    uint64_t userData; // 20
    uint8_t flags; // 28
    uint8_t unk29[0x30 - 0x29]; // 29
};
RED4EXT_ASSERT_SIZE(TrafficCollisionSphere, 0x30);
} // namespace world
using worldTrafficCollisionSphere = world::TrafficCollisionSphere;
} // namespace RED4ext

// clang-format on
