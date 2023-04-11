#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoiceTriggerPerSquadOrderMapItem.hpp>

namespace RED4ext
{
namespace audio
{
struct VoiceTriggerPerSquadOrderMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioVoiceTriggerPerSquadOrderMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::VoiceTriggerPerSquadOrderMapItem> items; // 38
    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VoiceTriggerPerSquadOrderMap, 0x78);
} // namespace audio
using audioVoiceTriggerPerSquadOrderMap = audio::VoiceTriggerPerSquadOrderMap;
} // namespace RED4ext

// clang-format on
