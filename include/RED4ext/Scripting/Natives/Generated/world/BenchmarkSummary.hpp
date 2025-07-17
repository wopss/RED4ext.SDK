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
    int32_t fpsClamp; // 16C
    float averageFps; // 170
    float minFps; // 174
    float maxFps; // 178
    float time; // 17C
    uint32_t frameNumber; // 180
    uint8_t upscalingType; // 184
    uint8_t frameGenerationType; // 185
    bool DLAAEnabled; // 186
    uint8_t unk187[0x188 - 0x187]; // 187
    float DLAASharpness; // 188
    bool DLSSEnabled; // 18C
    uint8_t unk18D[0x190 - 0x18D]; // 18D
    int32_t DLSSPreset; // 190
    bool DLSSDEnabled; // 194
    uint8_t unk195[0x198 - 0x195]; // 195
    int32_t DLSSQuality; // 198
    float DLSSSharpness; // 19C
    bool DLSSFrameGenEnabled; // 1A0
    bool DLSSMultiFrameGenEnabled; // 1A1
    uint8_t unk1A2[0x1A4 - 0x1A2]; // 1A2
    int32_t DLSSMultiFrameGenFrameToGenerate; // 1A4
    bool FSR2Enabled; // 1A8
    uint8_t unk1A9[0x1AC - 0x1A9]; // 1A9
    int32_t FSR2Quality; // 1AC
    float FSR2Sharpness; // 1B0
    bool FSR3Enabled; // 1B4
    uint8_t unk1B5[0x1B8 - 0x1B5]; // 1B5
    int32_t FSR3Quality; // 1B8
    float FSR3Sharpness; // 1BC
    bool FSR3FrameGenEnabled; // 1C0
    bool FSR4Enabled; // 1C1
    uint8_t unk1C2[0x1C4 - 0x1C2]; // 1C2
    int32_t FSR4Quality; // 1C4
    float FSR4Sharpness; // 1C8
    bool XeSSEnabled; // 1CC
    uint8_t unk1CD[0x1D0 - 0x1CD]; // 1CD
    int32_t XeSSQuality; // 1D0
    float XeSSSharpness; // 1D4
    bool XeSSFrameGenEnabled; // 1D8
    bool DRSEnabled; // 1D9
    uint8_t unk1DA[0x1DC - 0x1DA]; // 1DA
    uint32_t DRSTargetFPS; // 1DC
    uint32_t DRSMinimalResolutionPercentage; // 1E0
    uint32_t DRSMaximalResolutionPercentage; // 1E4
    bool CASSharpeningEnabled; // 1E8
    bool FSREnabled; // 1E9
    uint8_t unk1EA[0x1EC - 0x1EA]; // 1EA
    int32_t FSRQuality; // 1EC
    bool rayTracingEnabled; // 1F0
    bool rayTracedReflections; // 1F1
    bool rayTracedSunShadows; // 1F2
    bool rayTracedLocalShadows; // 1F3
    int32_t rayTracedLightingQuality; // 1F4
    bool rayTracedPathTracingEnabled; // 1F8
    uint8_t unk1F9[0x200 - 0x1F9]; // 1F9
};
RED4EXT_ASSERT_SIZE(BenchmarkSummary, 0x200);
} // namespace world
using worldBenchmarkSummary = world::BenchmarkSummary;
} // namespace RED4ext

// clang-format on
