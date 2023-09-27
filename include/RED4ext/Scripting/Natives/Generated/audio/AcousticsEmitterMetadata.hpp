#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EmitterMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct AcousticsEmitterMetadata : audio::EmitterMetadata
{
    static constexpr const char* NAME = "audioAcousticsEmitterMetadata";
    static constexpr const char* ALIAS = NAME;

    bool obstuctionEnabled; // 38
    bool occlusionEnabled; // 39
    bool repositioningEnabled; // 3A
    uint8_t unk3B[0x3C - 0x3B]; // 3B
    float obstructionFadeTime; // 3C
    bool postDopplerFactor; // 40
    bool enableOutdoorness; // 41
    bool elevateSource; // 42
    bool leakingFloorHack; // 43
    float ignoreOcclusionRadius; // 44
    uint8_t unk48[0x50 - 0x48]; // 48
    CName dopplerParameter; // 50
};
RED4EXT_ASSERT_SIZE(AcousticsEmitterMetadata, 0x58);
} // namespace audio
using audioAcousticsEmitterMetadata = audio::AcousticsEmitterMetadata;
} // namespace RED4ext

// clang-format on
