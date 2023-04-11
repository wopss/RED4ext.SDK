#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/VisionModeSystemRevealIdentifier.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events
{
struct RevealObjectEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsRevealObjectEvent";
    static constexpr const char* ALIAS = "RevealObjectEvent";

    bool reveal; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
    game::VisionModeSystemRevealIdentifier reason; // 48
};
RED4EXT_ASSERT_SIZE(RevealObjectEvent, 0x58);
} // namespace game::events
using gameeventsRevealObjectEvent = game::events::RevealObjectEvent;
using RevealObjectEvent = game::events::RevealObjectEvent;
} // namespace RED4ext

// clang-format on
