#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) TrafficLaneExitDefinition
{
    static constexpr const char* NAME = "worldTrafficLaneExitDefinition";
    static constexpr const char* ALIAS = NAME;

    NodeRef outLaneRef; // 00
    uint8_t unk08[0x10 - 0x8]; // 8
    Vector4 exitPosition; // 10
    float exitProbability; // 20
    bool endConnection; // 24
    bool thisLaneReversed; // 25
    bool outLaneReversed; // 26
    uint8_t unk27[0x30 - 0x27]; // 27
};
RED4EXT_ASSERT_SIZE(TrafficLaneExitDefinition, 0x30);
} // namespace world
using worldTrafficLaneExitDefinition = world::TrafficLaneExitDefinition;
} // namespace RED4ext

// clang-format on
