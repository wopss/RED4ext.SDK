#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace world { 
struct BenchmarkSummary : IScriptable
{
    static constexpr const char* NAME = "worldBenchmarkSummary";
    static constexpr const char* ALIAS = NAME;

    CString gameVersion; // 40
    CString benchmarkName; // 60
    CString gpuName; // 80
    uint64_t gpuMemory; // A0
    CString gpuDriverVersion; // A8
    CString cpuName; // C8
    uint64_t systemMemory; // E8
    CString osName; // F0
    CString osVersion; // 110
    CString presetName; // 130
    CName presetLocalizedName; // 150
    uint32_t renderWidth; // 158
    uint32_t renderHeight; // 15C
    bool windowed; // 160
    bool verticalSync; // 161
    uint8_t unk162[0x164 - 0x162]; // 162
    float averageFps; // 164
    float minFps; // 168
    float maxFps; // 16C
    float time; // 170
    uint32_t frameNumber; // 174
    bool DLSSEnabled; // 178
    uint8_t unk179[0x17C - 0x179]; // 179
    int32_t DLSSQuality; // 17C
    float DLSSSharpness; // 180
    bool CASSharpeningEnabled; // 184
    bool FSREnabled; // 185
    uint8_t unk186[0x188 - 0x186]; // 186
    int32_t FSRQuality; // 188
    bool DRSEnabled; // 18C
    uint8_t unk18D[0x190 - 0x18D]; // 18D
};
RED4EXT_ASSERT_SIZE(BenchmarkSummary, 0x190);
} // namespace world
} // namespace RED4ext
