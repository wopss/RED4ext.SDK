#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace audio
{
struct VoiceTriggerLimits
{
    static constexpr const char* NAME = "audioVoiceTriggerLimits";
    static constexpr const char* ALIAS = NAME;

    float probability; // 00
    float singleNpcMinRepeatTime; // 04
    float allNpcsMinRepeatTime; // 08
    float allNpcsSharingVoicesetMinRepeatTime; // 0C
    float combatVolume; // 10
};
RED4EXT_ASSERT_SIZE(VoiceTriggerLimits, 0x14);
} // namespace audio
using audioVoiceTriggerLimits = audio::VoiceTriggerLimits;
} // namespace RED4ext

// clang-format on
