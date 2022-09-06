#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/FunctionalTestsDataMemoryPoolRuntimeData.hpp>
#include <RED4ext/Scripting/Natives/Generated/FunctionalTestsDataMemoryPoolStaticData.hpp>

namespace RED4ext
{
struct FunctionalTestsDataMemoryStatsData : ISerializable
{
    static constexpr const char* NAME = "FunctionalTestsDataMemoryStatsData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    uint64_t totalPhysicalMemory; // 38
    uint64_t availablePhysicalMemory; // 40
    uint64_t runtimeTotalBytesAllocated; // 48
    uint64_t cpuBytesAllocated; // 50
    uint64_t gpuBytesAllocated; // 58
    uint8_t unk60[0x70 - 0x60]; // 60
    uint32_t totalAllocationCount; // 70
    uint32_t cpuAllocationCount; // 74
    uint32_t gpuAllocationCount; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    uint64_t engineTick; // 80
    float lastTimeDelta; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
    double engineTime; // 90
    uint64_t rawLocalTime; // 98
    CString playerPosition; // A0
    CString playerOrientation; // C0
    DynArray<FunctionalTestsDataMemoryPoolRuntimeData> poolsRuntimeInfo; // E0
    DynArray<FunctionalTestsDataMemoryPoolStaticData> poolsCurrentInfo; // F0
    uint8_t unk100[0x140 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(FunctionalTestsDataMemoryStatsData, 0x140);
} // namespace RED4ext

// clang-format on
