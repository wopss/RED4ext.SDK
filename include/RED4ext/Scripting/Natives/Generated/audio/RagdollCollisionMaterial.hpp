#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio { 
struct RagdollCollisionMaterial : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioRagdollCollisionMaterial";
    static constexpr const char* ALIAS = NAME;

    CName lightCollisionEventName; // 38
    CName heavyCollisionEventName; // 40
    CName dismemberedLimbCollisionEventName; // 48
};
RED4EXT_ASSERT_SIZE(RagdollCollisionMaterial, 0x50);
} // namespace audio
} // namespace RED4ext
