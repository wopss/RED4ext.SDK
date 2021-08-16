#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EmitterMetadata.hpp>

namespace RED4ext
{
namespace audio { 
struct LocomotionEmitterMetadata : audio::EmitterMetadata
{
    static constexpr const char* NAME = "audioLocomotionEmitterMetadata";
    static constexpr const char* ALIAS = NAME;

    CName customMaterialLookup; // 38
    bool isPlayer; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(LocomotionEmitterMetadata, 0x48);
} // namespace audio
} // namespace RED4ext
