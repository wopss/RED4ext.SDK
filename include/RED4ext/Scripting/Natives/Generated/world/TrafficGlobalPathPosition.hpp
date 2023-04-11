#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficGlobalPathPosition : ISerializable
{
    static constexpr const char* NAME = "worldTrafficGlobalPathPosition";
    static constexpr const char* ALIAS = NAME;

    Vector3 worldPosition; // 30
    uint8_t unk3C[0x48 - 0x3C]; // 3C
    uint32_t pathIdx; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(TrafficGlobalPathPosition, 0x50);
} // namespace world
using worldTrafficGlobalPathPosition = world::TrafficGlobalPathPosition;
} // namespace RED4ext

// clang-format on
