#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoiceTriggerLimitsMapItem.hpp>

namespace RED4ext
{
namespace audio
{
struct VoiceTriggerLimitsMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioVoiceTriggerLimitsMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> includes; // 38
    DynArray<audio::VoiceTriggerLimitsMapItem> triggers; // 48
};
RED4EXT_ASSERT_SIZE(VoiceTriggerLimitsMap, 0x58);
} // namespace audio
using audioVoiceTriggerLimitsMap = audio::VoiceTriggerLimitsMap;
} // namespace RED4ext

// clang-format on
