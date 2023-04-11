#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/VisionModeSystemRevealIdentifier.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct VisionRevealExpiredEvent : red::Event
{
    static constexpr const char* NAME = "gameVisionRevealExpiredEvent";
    static constexpr const char* ALIAS = NAME;

    game::VisionModeSystemRevealIdentifier revealId; // 40
};
RED4EXT_ASSERT_SIZE(VisionRevealExpiredEvent, 0x50);
} // namespace game
using gameVisionRevealExpiredEvent = game::VisionRevealExpiredEvent;
} // namespace RED4ext

// clang-format on
