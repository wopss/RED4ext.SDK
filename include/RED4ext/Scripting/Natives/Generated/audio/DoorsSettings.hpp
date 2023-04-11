#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/DeviceSettings.hpp>

namespace RED4ext
{
namespace audio
{
struct DoorsSettings : audio::DeviceSettings
{
    static constexpr const char* NAME = "audioDoorsSettings";
    static constexpr const char* ALIAS = NAME;

    CName openEvent; // B0
    CName openFailedEvent; // B8
    CName closeEvent; // C0
    CName lockEvent; // C8
    CName unlockEvent; // D0
    CName sealEvent; // D8
    CName soundBank; // E0
};
RED4EXT_ASSERT_SIZE(DoorsSettings, 0xE8);
} // namespace audio
using audioDoorsSettings = audio::DoorsSettings;
} // namespace RED4ext

// clang-format on
