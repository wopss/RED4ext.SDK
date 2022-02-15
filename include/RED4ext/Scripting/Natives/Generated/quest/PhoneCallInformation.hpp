#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneCallMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneCallPhase.hpp>

namespace RED4ext
{
namespace quest { 
struct PhoneCallInformation
{
    static constexpr const char* NAME = "questPhoneCallInformation";
    static constexpr const char* ALIAS = "PhoneCallInformation";

    quest::PhoneCallMode callMode; // 00
    bool isAudioCall; // 04
    uint8_t unk05[0x8 - 0x5]; // 5
    CName contactName; // 08
    bool isPlayerCalling; // 10
    bool isPlayerTriggered; // 11
    uint8_t unk12[0x14 - 0x12]; // 12
    quest::PhoneCallPhase callPhase; // 14
    bool isRejectable; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(PhoneCallInformation, 0x20);
} // namespace quest
using PhoneCallInformation = quest::PhoneCallInformation;
} // namespace RED4ext
