#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace world
{
struct AudioAttractAreaNodeSettings
{
    static constexpr const char* NAME = "worldAudioAttractAreaNodeSettings";
    static constexpr const char* ALIAS = NAME;

    CName metadataName; // 00
};
RED4EXT_ASSERT_SIZE(AudioAttractAreaNodeSettings, 0x8);
} // namespace world
using worldAudioAttractAreaNodeSettings = world::AudioAttractAreaNodeSettings;
} // namespace RED4ext

// clang-format on
