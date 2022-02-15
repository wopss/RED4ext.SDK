#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/LocomotionWaterContextSettings.hpp>

namespace RED4ext
{
struct CResource;
namespace audio { struct LocomotionCustomActionVfxDictionary; }
namespace audio { struct LocomotionStateVfxDictionary; }

namespace audio { 
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
    RaRef<CResource> defaultLegVfx; // 78
    Handle<audio::LocomotionStateVfxDictionary> locomotionStatesLegVfx; // 80
    Handle<audio::LocomotionCustomActionVfxDictionary> customActionLegVfx; // 90
};
RED4EXT_ASSERT_SIZE(LocomotionWaterSettings, 0xA0);
} // namespace audio
} // namespace RED4ext
