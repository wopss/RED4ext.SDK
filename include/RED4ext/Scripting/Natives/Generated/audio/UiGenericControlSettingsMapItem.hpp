#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio { struct KeySoundEventDictionary; }

namespace audio
{
struct UiGenericControlSettingsMapItem : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioUiGenericControlSettingsMapItem";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::KeySoundEventDictionary> uiEventToAudioEventDictionary; // 38
};
RED4EXT_ASSERT_SIZE(UiGenericControlSettingsMapItem, 0x48);
} // namespace audio
using audioUiGenericControlSettingsMapItem = audio::UiGenericControlSettingsMapItem;
} // namespace RED4ext

// clang-format on
