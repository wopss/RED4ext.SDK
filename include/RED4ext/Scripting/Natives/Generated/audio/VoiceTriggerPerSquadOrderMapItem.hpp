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
struct VoiceTriggerPerSquadOrderMapItem
{
    static constexpr const char* NAME = "audioVoiceTriggerPerSquadOrderMapItem";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    CName triggerName; // 08
};
RED4EXT_ASSERT_SIZE(VoiceTriggerPerSquadOrderMapItem, 0x10);
} // namespace audio
using audioVoiceTriggerPerSquadOrderMapItem = audio::VoiceTriggerPerSquadOrderMapItem;
} // namespace RED4ext

// clang-format on
