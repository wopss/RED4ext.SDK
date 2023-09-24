#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/LocomotionWaterContextSettings.hpp>

namespace RED4ext
{
struct CResource;
namespace audio { struct LocomotionCustomActionVfxDictionary; }
namespace audio { struct LocomotionStateVfxDictionary; }

namespace audio
{
struct LocomotionWaterSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioLocomotionWaterSettings";
    static constexpr const char* ALIAS = NAME;

    float minSpeedToApplyImpulses; // 38
    float minHeelDepthToApplyImpulses; // 3C
    float shallowWaterDepth; // 40
    float intermediateWaterDepth; // 44
    audio::LocomotionWaterContextSettings shallowSettings; // 48
    audio::LocomotionWaterContextSettings intermediateSettings; // 58
    audio::LocomotionWaterContextSettings deepSettings; // 68
    float minHeelDepthToSpawnFallFx; // 78
    float minDownwardSpeedForRegularFall; // 7C
    float minDownwardSpeedForFastFall; // 80
    uint8_t unk84[0x88 - 0x84]; // 84
    RaRef<CResource> defaultLegVfx; // 88
    RaRef<CResource> regularFallVfx; // 90
    RaRef<CResource> fastFallVfx; // 98
    CName regularFallEvent; // A0
    CName fastFallEvent; // A8
    Handle<audio::LocomotionStateVfxDictionary> locomotionStatesLegVfx; // B0
    Handle<audio::LocomotionCustomActionVfxDictionary> customActionLegVfx; // C0
};
RED4EXT_ASSERT_SIZE(LocomotionWaterSettings, 0xD0);
} // namespace audio
using audioLocomotionWaterSettings = audio::LocomotionWaterSettings;
} // namespace RED4ext

// clang-format on
