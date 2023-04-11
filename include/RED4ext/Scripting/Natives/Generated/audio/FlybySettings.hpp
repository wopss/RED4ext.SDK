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
struct FlybySettings
{
    static constexpr const char* NAME = "audioFlybySettings";
    static constexpr const char* ALIAS = NAME;

    float movementSpeed; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName flybyEvent; // 08
};
RED4EXT_ASSERT_SIZE(FlybySettings, 0x10);
} // namespace audio
using audioFlybySettings = audio::FlybySettings;
} // namespace RED4ext

// clang-format on
