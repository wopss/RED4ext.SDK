#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct AcousticConstantsPreset : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioAcousticConstantsPreset";
    static constexpr const char* ALIAS = NAME;

    float dopplerFactor; // 38
    float speedOfSound; // 3C
    float wideInteriorLimit; // 40
    float enclosedCeilingDistance; // 44
    float urbanNarrowDistance; // 48
    float urbanStreetDistance; // 4C
    float exteriorWideAltitude; // 50
    float elevatedOpenDistance; // 54
    float ambExteriorCeilingMinDistance; // 58
    float ambExteriorCeilingMaxDistance; // 5C
    float badlandsWideRelativeAltitude; // 60
    float repositioningStandardZoomFactor; // 64
    float repositioningScanningZoomFactor; // 68
    float repositioningVoStandardZoomFactor; // 6C
    float repositioningVoScanningZoomFactor; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
    DynArray<CName> groupingExcludedVisualTags; // 78
    CName windowEventName; // 88
    float maxWindowOffset; // 90
    uint8_t unk94[0x98 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(AcousticConstantsPreset, 0x98);
} // namespace audio
using audioAcousticConstantsPreset = audio::AcousticConstantsPreset;
} // namespace RED4ext

// clang-format on
