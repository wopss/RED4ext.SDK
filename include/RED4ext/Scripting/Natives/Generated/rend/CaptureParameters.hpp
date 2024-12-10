#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AbsolutePathSerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/EEnvManagerModifier.hpp>
#include <RED4ext/Scripting/Natives/Generated/ESaveFormat.hpp>
#include <RED4ext/Scripting/Natives/Generated/Point.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/CaptureContextType.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/ResolutionMultiplier.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/ScreenshotMode.hpp>

namespace RED4ext
{
namespace rend
{
struct CaptureParameters
{
    static constexpr const char* NAME = "rendCaptureParameters";
    static constexpr const char* ALIAS = NAME;

    rend::ScreenshotMode mode; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CString outputDirectoryName; // 08
    CString outputDirectoryNameSuffix; // 28
    uint32_t initialFrameNumber; // 48
    uint32_t outputDirectoryIndex; // 4C
    uint32_t recordingFPS; // 50
    Point customResolution; // 54
    rend::ResolutionMultiplier resolutionMultiplier; // 5C
    AbsolutePathSerializable outputPath; // 60
    DynArray<EEnvManagerModifier> emmModes; // 80
    float fovMultiplier; // 90
    uint8_t unk94[0x98 - 0x94]; // 94
    ESaveFormat saveFormat; // 98
    rend::CaptureContextType captureContextType; // 9C
    bool enable; // A0
    bool videoRecordingMode; // A1
    bool audioRecordingMode; // A2
    uint8_t unkA3[0xB0 - 0xA3]; // A3
};
RED4EXT_ASSERT_SIZE(CaptureParameters, 0xB0);
} // namespace rend
using rendCaptureParameters = rend::CaptureParameters;
} // namespace RED4ext

// clang-format on
