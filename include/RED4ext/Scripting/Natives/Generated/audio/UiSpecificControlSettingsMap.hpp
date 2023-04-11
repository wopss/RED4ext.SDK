#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/UiSpecificControlSettingsMapItem.hpp>

namespace RED4ext
{
namespace audio
{
struct UiSpecificControlSettingsMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioUiSpecificControlSettingsMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::UiSpecificControlSettingsMapItem> specificControlSettingsMatrix; // 38
    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(UiSpecificControlSettingsMap, 0x78);
} // namespace audio
using audioUiSpecificControlSettingsMap = audio::UiSpecificControlSettingsMap;
} // namespace RED4ext

// clang-format on
