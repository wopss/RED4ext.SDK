#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceoverContext.hpp>

namespace RED4ext
{
namespace audio
{
struct VoiceTriggerData
{
    static constexpr const char* NAME = "audioVoiceTriggerData";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    uint32_t variationIndex; // 08
    uint32_t variationNumber; // 0C
    loc::VoiceoverContext overridingVoContext; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(VoiceTriggerData, 0x18);
} // namespace audio
using audioVoiceTriggerData = audio::VoiceTriggerData;
} // namespace RED4ext

// clang-format on
