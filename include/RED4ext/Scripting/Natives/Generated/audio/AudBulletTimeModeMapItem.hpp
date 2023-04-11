#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct AudBulletTimeModeMapItem : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioAudBulletTimeModeMapItem";
    static constexpr const char* ALIAS = NAME;

    CName enterEvent; // 38
    CName exitEvent; // 40
    CName timeModeRTPC; // 48
};
RED4EXT_ASSERT_SIZE(AudBulletTimeModeMapItem, 0x50);
} // namespace audio
using audioAudBulletTimeModeMapItem = audio::AudBulletTimeModeMapItem;
} // namespace RED4ext

// clang-format on
