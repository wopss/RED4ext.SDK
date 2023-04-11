#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/KillType.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::events
{
struct KillRewardEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsKillRewardEvent";
    static constexpr const char* ALIAS = "KillRewardEvent";

    WeakHandle<game::Object> victim; // 40
    game::KillType killType; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(KillRewardEvent, 0x58);
} // namespace game::events
using gameeventsKillRewardEvent = game::events::KillRewardEvent;
using KillRewardEvent = game::events::KillRewardEvent;
} // namespace RED4ext

// clang-format on
