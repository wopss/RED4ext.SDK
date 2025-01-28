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
    bool DLSSDEnabled; // 18D
    uint8_t unk18E[0x190 - 0x18E]; // 18E
    int32_t DLSSQuality; // 190
    float DLSSSharpness; // 194
    bool DLSSFrameGenEnabled; // 198
    bool DLSSMultiFrameGenEnabled; // 199
    uint8_t unk19A[0x19C - 0x19A]; // 19A
    int32_t DLSSMultiFrameGenFrameToGenerate; // 19C
    bool FSR2Enabled; // 1A0
    uint8_t unk1A1[0x1A4 - 0x1A1]; // 1A1
    int32_t FSR2Quality; // 1A4
    float FSR2Sharpness; // 1A8
    bool FSR3Enabled; // 1AC
    uint8_t unk1AD[0x1B0 - 0x1AD]; // 1AD
    int32_t FSR3Quality; // 1B0
    float FSR3Sharpness; // 1B4
    bool FSR3FrameGenEnabled; // 1B8
    bool XeSSEnabled; // 1B9
    uint8_t unk1BA[0x1BC - 0x1BA]; // 1BA
    int32_t XeSSQuality; // 1BC
    float XeSSSharpness; // 1C0
    bool DRSEnabled; // 1C4
    uint8_t unk1C5[0x1C8 - 0x1C5]; // 1C5
    uint32_t DRSTargetFPS; // 1C8
    uint32_t DRSMinimalResolutionPercentage; // 1CC
    uint32_t DRSMaximalResolutionPercentage; // 1D0
    bool CASSharpeningEnabled; // 1D4
    bool FSREnabled; // 1D5
    uint8_t unk1D6[0x1D8 - 0x1D6]; // 1D6
    int32_t FSRQuality; // 1D8
    bool rayTracingEnabled; // 1DC
    bool rayTracedReflections; // 1DD
    bool rayTracedSunShadows; // 1DE
    bool rayTracedLocalShadows; // 1DF
    int32_t rayTracedLightingQuality; // 1E0
    bool rayTracedPathTracingEnabled; // 1E4
    uint8_t unk1E5[0x1E8 - 0x1E5]; // 1E5
};
RED4EXT_ASSERT_SIZE(BenchmarkSummary, 0x1E8);
} // namespace world
using worldBenchmarkSummary = world::BenchmarkSummary;
} // namespace RED4ext

// clang-format on
