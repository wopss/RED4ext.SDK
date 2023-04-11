#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace world
{
struct StreamingTestSummary : ISerializable
{
    static constexpr const char* NAME = "worldStreamingTestSummary";
    static constexpr const char* ALIAS = NAME;

    CString gameDefinition; // 30
    bool noCrowds; // 50
    uint8_t unk51[0x54 - 0x51]; // 51
    float testDurationSeconds; // 54
    uint64_t initialBytesRead; // 58
    uint64_t bytesReadDuringTest; // 60
    uint64_t bytesReadDuringDriving; // 68
    uint64_t bytesReadDuringCooldown; // 70
    uint64_t totalSeeksBytes; // 78
    float minFps; // 80
    float maxFps; // 84
    float averageFps; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
};
RED4EXT_ASSERT_SIZE(StreamingTestSummary, 0x90);
} // namespace world
using worldStreamingTestSummary = world::StreamingTestSummary;
} // namespace RED4ext

// clang-format on
