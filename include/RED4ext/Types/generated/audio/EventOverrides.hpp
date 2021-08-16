#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio { struct EventOverrideDictionary; }

namespace audio { 
struct EventOverrides : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioEventOverrides";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::EventOverrideDictionary> eventOverrides; // 38
};
RED4EXT_ASSERT_SIZE(EventOverrides, 0x48);
} // namespace audio
} // namespace RED4ext
