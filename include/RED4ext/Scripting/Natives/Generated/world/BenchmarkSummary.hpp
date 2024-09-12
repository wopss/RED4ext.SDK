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
    bool FSR2Enabled; // 199
    uint8_t unk19A[0x19C - 0x19A]; // 19A
    int32_t FSR2Quality; // 19C
    float FSR2Sharpness; // 1A0
    bool FSR3Enabled; // 1A4
    uint8_t unk1A5[0x1A8 - 0x1A5]; // 1A5
    int32_t FSR3Quality; // 1A8
    float FSR3Sharpness; // 1AC
    bool FSR3FrameGenEnabled; // 1B0
    bool XeSSEnabled; // 1B1
    uint8_t unk1B2[0x1B4 - 0x1B2]; // 1B2
    int32_t XeSSQuality; // 1B4
    float XeSSSharpness; // 1B8
    bool DRSEnabled; // 1BC
    uint8_t unk1BD[0x1C0 - 0x1BD]; // 1BD
    uint32_t DRSTargetFPS; // 1C0
    uint32_t DRSMinimalResolutionPercentage; // 1C4
    uint32_t DRSMaximalResolutionPercentage; // 1C8
    bool CASSharpeningEnabled; // 1CC
    bool FSREnabled; // 1CD
    uint8_t unk1CE[0x1D0 - 0x1CE]; // 1CE
    int32_t FSRQuality; // 1D0
    bool rayTracingEnabled; // 1D4
    bool rayTracedReflections; // 1D5
    bool rayTracedSunShadows; // 1D6
    bool rayTracedLocalShadows; // 1D7
    int32_t rayTracedLightingQuality; // 1D8
    bool rayTracedPathTracingEnabled; // 1DC
    uint8_t unk1DD[0x1E0 - 0x1DD]; // 1DD
};
RED4EXT_ASSERT_SIZE(BenchmarkSummary, 0x1E0);
} // namespace world
using worldBenchmarkSummary = world::BenchmarkSummary;
} // namespace RED4ext

// clang-format on
