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
    CString macProductName; // 130
    CString presetName; // 150
    CName presetLocalizedName; // 170
    CName textureQualityPresetLocalizedName; // 178
    uint32_t renderWidth; // 180
    uint32_t renderHeight; // 184
    uint8_t windowMode; // 188
    bool verticalSync; // 189
    uint8_t unk18A[0x18C - 0x18A]; // 18A
    int32_t fpsClamp; // 18C
    float averageFps; // 190
    float minFps; // 194
    float maxFps; // 198
    float time; // 19C
    uint32_t frameNumber; // 1A0
    uint8_t upscalingType; // 1A4
    uint8_t frameGenerationType; // 1A5
    bool DLAAEnabled; // 1A6
    uint8_t unk1A7[0x1A8 - 0x1A7]; // 1A7
    float DLAASharpness; // 1A8
    bool DLSSEnabled; // 1AC
    uint8_t unk1AD[0x1B0 - 0x1AD]; // 1AD
    int32_t DLSSPreset; // 1B0
    bool DLSSDEnabled; // 1B4
    uint8_t unk1B5[0x1B8 - 0x1B5]; // 1B5
    int32_t DLSSQuality; // 1B8
    float DLSSSharpness; // 1BC
    bool DLSSFrameGenEnabled; // 1C0
    bool DLSSMultiFrameGenEnabled; // 1C1
    uint8_t unk1C2[0x1C4 - 0x1C2]; // 1C2
    int32_t DLSSMultiFrameGenFrameToGenerate; // 1C4
    uint8_t unk1C8[0x1CC - 0x1C8]; // 1C8
    bool FSR2Enabled; // 1CC
    uint8_t unk1CD[0x1D0 - 0x1CD]; // 1CD
    int32_t FSR2Quality; // 1D0
    float FSR2Sharpness; // 1D4
    bool FSR3Enabled; // 1D8
    uint8_t unk1D9[0x1DC - 0x1D9]; // 1D9
    int32_t FSR3Quality; // 1DC
    float FSR3Sharpness; // 1E0
    bool FSR3FrameGenEnabled; // 1E4
    bool FSR4Enabled; // 1E5
    uint8_t unk1E6[0x1E8 - 0x1E6]; // 1E6
    int32_t FSR4Quality; // 1E8
    float FSR4Sharpness; // 1EC
    bool XeSSEnabled; // 1F0
    uint8_t unk1F1[0x1F4 - 0x1F1]; // 1F1
    int32_t XeSSQuality; // 1F4
    float XeSSSharpness; // 1F8
    bool XeSSFrameGenEnabled; // 1FC
    bool MFXEnabled; // 1FD
    uint8_t unk1FE[0x200 - 0x1FE]; // 1FE
    int32_t MFXQuality; // 200
    float MFXSharpness; // 204
    bool MFXFrameGenEnabled; // 208
    bool DRSEnabled; // 209
    uint8_t unk20A[0x20C - 0x20A]; // 20A
    uint32_t DRSTargetFPS; // 20C
    uint32_t DRSMinimalResolutionPercentage; // 210
    uint32_t DRSMaximalResolutionPercentage; // 214
    bool CASSharpeningEnabled; // 218
    bool FSREnabled; // 219
    uint8_t unk21A[0x21C - 0x21A]; // 21A
    int32_t FSRQuality; // 21C
    bool rayTracingEnabled; // 220
    bool rayTracedReflections; // 221
    bool rayTracedSunShadows; // 222
    bool rayTracedLocalShadows; // 223
    int32_t rayTracedLightingQuality; // 224
    bool rayTracedPathTracingEnabled; // 228
    uint8_t unk229[0x230 - 0x229]; // 229
};
RED4EXT_ASSERT_SIZE(BenchmarkSummary, 0x230);
} // namespace world
using worldBenchmarkSummary = world::BenchmarkSummary;
} // namespace RED4ext

// clang-format on
