#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct FunctionalTestsDataTimeStatsData : ISerializable
{
    static constexpr const char* NAME = "FunctionalTestsDataTimeStatsData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    uint64_t engineTick; // 38
    float lastFps; // 40
    float minFps; // 44
    float lastTimeDelta; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    double engineTime; // 50
    float cpuTime; // 58
    float gpuTime; // 5C
    uint64_t rawLocalTime; // 60
    CString playerPosition; // 68
    CString playerOrientation; // 88
    uint8_t unkA8[0xE8 - 0xA8]; // A8
};
RED4EXT_ASSERT_SIZE(FunctionalTestsDataTimeStatsData, 0xE8);
} // namespace RED4ext

// clang-format on
