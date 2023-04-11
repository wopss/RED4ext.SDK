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
struct CommonEntitySettings
{
    static constexpr const char* NAME = "audioCommonEntitySettings";
    static constexpr const char* ALIAS = NAME;

    CName onAttachEvent; // 00
    CName onDetachEvent; // 08
    bool stopAllSoundsOnDetach; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(CommonEntitySettings, 0x18);
} // namespace audio
using audioCommonEntitySettings = audio::CommonEntitySettings;
} // namespace RED4ext

// clang-format on
