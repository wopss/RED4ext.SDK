#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoiceContextMapItem.hpp>

namespace RED4ext
{
namespace audio { 
struct VoiceContextMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioVoiceContextMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> includes; // 38
    DynArray<audio::VoiceContextMapItem> contexts; // 48
};
RED4EXT_ASSERT_SIZE(VoiceContextMap, 0x58);
} // namespace audio
} // namespace RED4ext
