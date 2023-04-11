#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/UiGenericControlSettingsMapItem.hpp>

namespace RED4ext
{
namespace audio
{
struct UiGenericControlSettingsMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioUiGenericControlSettingsMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::UiGenericControlSettingsMapItem> uiControlMatrix; // 38
    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(UiGenericControlSettingsMap, 0x78);
} // namespace audio
using audioUiGenericControlSettingsMap = audio::UiGenericControlSettingsMap;
} // namespace RED4ext

// clang-format on
