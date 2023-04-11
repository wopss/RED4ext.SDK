#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio { struct KeySoundEventDictionary; }

namespace audio
{
struct UiControlEventsSettingsMapItem : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioUiControlEventsSettingsMapItem";
    static constexpr const char* ALIAS = NAME;

    CName baseEvent; // 38
    Handle<audio::KeySoundEventDictionary> customActionsDictionary; // 40
};
RED4EXT_ASSERT_SIZE(UiControlEventsSettingsMapItem, 0x50);
} // namespace audio
using audioUiControlEventsSettingsMapItem = audio::UiControlEventsSettingsMapItem;
} // namespace RED4ext

// clang-format on
