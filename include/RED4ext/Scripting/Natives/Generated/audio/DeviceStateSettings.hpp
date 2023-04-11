#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio
{
struct DeviceStateSettings
{
    static constexpr const char* NAME = "audioDeviceStateSettings";
    static constexpr const char* ALIAS = NAME;

    CName powerRestoredSound; // 00
    CName powerCutSound; // 08
    CName turnOnSound; // 10
    CName turnOffSound; // 18
    CName breakingSound; // 20
};
RED4EXT_ASSERT_SIZE(DeviceStateSettings, 0x28);
} // namespace audio
using audioDeviceStateSettings = audio::DeviceStateSettings;
} // namespace RED4ext

// clang-format on
