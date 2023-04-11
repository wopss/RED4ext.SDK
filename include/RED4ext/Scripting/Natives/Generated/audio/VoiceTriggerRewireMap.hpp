#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoiceTriggerRewireMapItem.hpp>

namespace RED4ext
{
namespace audio
{
struct VoiceTriggerRewireMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioVoiceTriggerRewireMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> includes; // 38
    DynArray<audio::VoiceTriggerRewireMapItem> items; // 48
};
RED4EXT_ASSERT_SIZE(VoiceTriggerRewireMap, 0x58);
} // namespace audio
using audioVoiceTriggerRewireMap = audio::VoiceTriggerRewireMap;
} // namespace RED4ext

// clang-format on
