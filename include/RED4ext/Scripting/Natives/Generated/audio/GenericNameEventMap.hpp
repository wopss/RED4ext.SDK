#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio { struct GenericNameEventDictionary; }

namespace audio
{
struct GenericNameEventMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioGenericNameEventMap";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::GenericNameEventDictionary> eventOverrides; // 38
};
RED4EXT_ASSERT_SIZE(GenericNameEventMap, 0x48);
} // namespace audio
using audioGenericNameEventMap = audio::GenericNameEventMap;
} // namespace RED4ext

// clang-format on
