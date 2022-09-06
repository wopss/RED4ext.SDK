#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct FunctionalTestsDataRenderingStatsData : ISerializable
{
    static constexpr const char* NAME = "FunctionalTestsDataRenderingStatsData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    uint64_t engineTick; // 38
    uint64_t rawLocalTime; // 40
    CString playerPosition; // 48
    CString playerOrientation; // 68
    uint32_t meshChunkCount; // 88
    uint32_t cameraTriangleCount; // 8C
    uint32_t shadowTriangleCount; // 90
    uint8_t unk94[0xD8 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(FunctionalTestsDataRenderingStatsData, 0xD8);
} // namespace RED4ext

// clang-format on
