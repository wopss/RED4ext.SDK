#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudBulletTimeModeMapItem.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct AudBulletTimeModeMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioAudBulletTimeModeMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::AudBulletTimeModeMapItem> bulletTimeMapItems; // 38
};
RED4EXT_ASSERT_SIZE(AudBulletTimeModeMap, 0x48);
} // namespace audio
using audioAudBulletTimeModeMap = audio::AudBulletTimeModeMap;
} // namespace RED4ext

// clang-format on
