#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::weapon::events
{
struct PerfectChargeEvent : red::Event
{
    static constexpr const char* NAME = "gameweaponeventsPerfectChargeEvent";
    static constexpr const char* ALIAS = "PerfectChargeEvent";

    CName type; // 40
};
RED4EXT_ASSERT_SIZE(PerfectChargeEvent, 0x48);
} // namespace game::weapon::events
using gameweaponeventsPerfectChargeEvent = game::weapon::events::PerfectChargeEvent;
using PerfectChargeEvent = game::weapon::events::PerfectChargeEvent;
} // namespace RED4ext

// clang-format on
