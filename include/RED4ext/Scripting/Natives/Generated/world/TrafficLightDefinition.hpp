#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficLightStage.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficLightDefinition
{
    static constexpr const char* NAME = "worldTrafficLightDefinition";
    static constexpr const char* ALIAS = NAME;

    float extent; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    uint32_t groupIdx; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    DynArray<world::TrafficLightStage> timeline; // 10
    float positionOnLane; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(TrafficLightDefinition, 0x28);
} // namespace world
using worldTrafficLightDefinition = world::TrafficLightDefinition;
} // namespace RED4ext

// clang-format on
