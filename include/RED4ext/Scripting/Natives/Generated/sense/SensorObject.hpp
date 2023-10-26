#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SenseObjectType.hpp>

namespace RED4ext
{
namespace sense
{
struct __declspec(align(0x10)) SensorObject : ISerializable
{
    static constexpr const char* NAME = "senseSensorObject";
    static constexpr const char* ALIAS = "SensorObject";

    uint8_t unk30[0x61 - 0x30]; // 30
    bool hearingEnabled; // 61
    uint8_t unk62[0x64 - 0x62]; // 62
    game::data::SenseObjectType sensorObjectType; // 64
    uint8_t unk68[0x88 - 0x68]; // 68
    TweakDBID presetID; // 88
    uint8_t unk90[0x118 - 0x90]; // 90
    float detectionFactor; // 118
    float detectionDropFactor; // 11C
    float detectionCoolDownTime; // 120
    float detectionPartCoolDownTime; // 124
    uint8_t unk128[0xB30 - 0x128]; // 128
};
RED4EXT_ASSERT_SIZE(SensorObject, 0xB30);
} // namespace sense
using senseSensorObject = sense::SensorObject;
using SensorObject = sense::SensorObject;
} // namespace RED4ext

// clang-format on
