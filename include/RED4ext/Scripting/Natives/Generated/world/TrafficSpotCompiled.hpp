#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficSpotCompiled : ISerializable
{
    static constexpr const char* NAME = "worldTrafficSpotCompiled";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x58 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(TrafficSpotCompiled, 0x58);
} // namespace world
using worldTrafficSpotCompiled = world::TrafficSpotCompiled;
} // namespace RED4ext

// clang-format on
