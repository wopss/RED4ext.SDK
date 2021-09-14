#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace quest { 
struct MultiplayerGiveChoiceTokenEvent : red::Event
{
    static constexpr const char* NAME = "questMultiplayerGiveChoiceTokenEvent";
    static constexpr const char* ALIAS = "MultiplayerGiveChoiceTokenEvent";

    CName compatibleDeviceName; // 40
    uint32_t timeout; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(MultiplayerGiveChoiceTokenEvent, 0x50);
} // namespace quest
using MultiplayerGiveChoiceTokenEvent = quest::MultiplayerGiveChoiceTokenEvent;
} // namespace RED4ext
