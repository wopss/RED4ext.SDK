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
namespace world
{
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
    CName textureQualityPresetLocalizedName; // 158
    uint32_t renderWidth; // 160
    uint32_t renderHeight; // 164
    uint8_t windowMode; // 168
    bool verticalSync; // 169
    uint8_t unk16A[0x16C - 0x16A]; // 16A
    float averageFps; // 16C
    float minFps; // 170
    float maxFps; // 174
    float time; // 178
    uint32_t frameNumber; // 17C
    bool DLAAEnabled; // 180
    uint8_t unk181[0x184 - 0x181]; // 181
    float DLAASharpness; // 184
    bool DLSSEnabled; // 188
    uint8_t unk189[0x18C - 0x189]; // 189
    int32_t DLSSQuality; // 18C
    float DLSSSharpness; // 190
    bool DLSSFrameGenEnabled; // 194
    bool FSR2Enabled; // 195
    uint8_t unk196[0x198 - 0x196]; // 196
    int32_t FSR2Quality; // 198
    float FSR2Sharpness; // 19C
    bool XeSSEnabled; // 1A0
    uint8_t unk1A1[0x1A4 - 0x1A1]; // 1A1
    int32_t XeSSQuality; // 1A4
    float XeSSSharpness; // 1A8
    bool DRSEnabled; // 1AC
    uint8_t unk1AD[0x1B0 - 0x1AD]; // 1AD
    uint32_t DRSTargetFPS; // 1B0
    uint32_t DRSMinimalResolutionPercentage; // 1B4
    uint32_t DRSMaximalResolutionPercentage; // 1B8
    bool CASSharpeningEnabled; // 1BC
    bool FSREnabled; // 1BD
    uint8_t unk1BE[0x1C0 - 0x1BE]; // 1BE
    int32_t FSRQuality; // 1C0
    bool rayTracingEnabled; // 1C4
    bool rayTracedReflections; // 1C5
    bool rayTracedSunShadows; // 1C6
    bool rayTracedLocalShadows; // 1C7
    int32_t rayTracedLightingQuality; // 1C8
    bool rayTracedPathTracingEnabled; // 1CC
    uint8_t unk1CD[0x1D0 - 0x1CD]; // 1CD
};
RED4EXT_ASSERT_SIZE(BenchmarkSummary, 0x1D0);
} // namespace world
using worldBenchmarkSummary = world::BenchmarkSummary;
} // namespace RED4ext

// clang-format on
