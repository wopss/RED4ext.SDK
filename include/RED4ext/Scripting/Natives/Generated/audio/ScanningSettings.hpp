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
struct ScanningSettings
{
    static constexpr const char* NAME = "audioScanningSettings";
    static constexpr const char* ALIAS = NAME;

    CName scanningStartEvent; // 00
    CName scanningStopEvent; // 08
    CName scanningCompleteEvent; // 10
    CName scanningAvailableEvent; // 18
};
RED4EXT_ASSERT_SIZE(ScanningSettings, 0x20);
} // namespace audio
using audioScanningSettings = audio::ScanningSettings;
} // namespace RED4ext

// clang-format on
