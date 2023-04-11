#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoiceTriggerLimits.hpp>

namespace RED4ext
{
namespace audio
{
struct VoiceTriggerLimitsMapItem
{
    static constexpr const char* NAME = "audioVoiceTriggerLimitsMapItem";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    audio::VoiceTriggerLimits limits; // 08
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(VoiceTriggerLimitsMapItem, 0x20);
} // namespace audio
using audioVoiceTriggerLimitsMapItem = audio::VoiceTriggerLimitsMapItem;
} // namespace RED4ext

// clang-format on
