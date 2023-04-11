#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/RadioSpeakerType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISystemConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct Radio_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questRadio_ConditionType";
    static constexpr const char* ALIAS = NAME;

    bool inverted; // 38
    bool limitToSpecifiedSpeakersStations; // 39
    uint8_t unk3A[0x3C - 0x3A]; // 3A
    audio::RadioSpeakerType speakerType; // 3C
};
RED4EXT_ASSERT_SIZE(Radio_ConditionType, 0x40);
} // namespace quest
using questRadio_ConditionType = quest::Radio_ConditionType;
} // namespace RED4ext

// clang-format on
