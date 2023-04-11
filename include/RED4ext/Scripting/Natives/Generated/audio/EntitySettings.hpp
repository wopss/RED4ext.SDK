#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AuxiliaryMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/CommonEntitySettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/ScanningSettings.hpp>

namespace RED4ext
{
namespace audio
{
struct EntitySettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioEntitySettings";
    static constexpr const char* ALIAS = NAME;

    audio::CommonEntitySettings commonSettings; // 38
    audio::ScanningSettings scanningSettings; // 50
    audio::AuxiliaryMetadata auxiliaryMetadata; // 70
    CName emitterDecoratorMetadata; // 78
    bool preferSoundComponentPosition; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
};
RED4EXT_ASSERT_SIZE(EntitySettings, 0x88);
} // namespace audio
using audioEntitySettings = audio::EntitySettings;
} // namespace RED4ext

// clang-format on
