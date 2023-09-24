#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace quest
{
struct BriefingSequencePlayerEvent : red::Event
{
    static constexpr const char* NAME = "questBriefingSequencePlayerEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xA0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(BriefingSequencePlayerEvent, 0xA0);
} // namespace quest
using questBriefingSequencePlayerEvent = quest::BriefingSequencePlayerEvent;
} // namespace RED4ext

// clang-format on
