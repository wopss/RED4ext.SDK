#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StreamingDataGroup.hpp>

namespace RED4ext
{
namespace world
{
struct StreamingBlockIndex
{
    static constexpr const char* NAME = "worldStreamingBlockIndex";
    static constexpr const char* ALIAS = NAME;

    uint32_t rldGridCell; // 00
    world::StreamingDataGroup oup; // 04
    uint8_t unk05[0x8 - 0x5]; // 5
};
RED4EXT_ASSERT_SIZE(StreamingBlockIndex, 0x8);
} // namespace world
using worldStreamingBlockIndex = world::StreamingBlockIndex;
} // namespace RED4ext

// clang-format on
