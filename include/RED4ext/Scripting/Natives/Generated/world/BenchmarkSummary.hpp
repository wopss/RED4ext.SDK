#pragma once

// clang-format off

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
    bool DLSSFrameGenEnabled; // 184
    bool FSR2Enabled; // 185
    uint8_t unk186[0x188 - 0x186]; // 186
    int32_t FSR2Quality; // 188
    float FSR2Sharpness; // 18C
    bool DRSEnabled; // 190
    uint8_t unk191[0x194 - 0x191]; // 191
    uint32_t DRSTargetFPS; // 194
    uint32_t DRSMinimalResolutionPercentage; // 198
    uint32_t DRSMaximalResolutionPercentage; // 19C
    bool CASSharpeningEnabled; // 1A0
    bool FSREnabled; // 1A1
    uint8_t unk1A2[0x1A4 - 0x1A2]; // 1A2
    int32_t FSRQuality; // 1A4
};
RED4EXT_ASSERT_SIZE(BenchmarkSummary, 0x1A8);
} // namespace world
} // namespace RED4ext

// clang-format on
