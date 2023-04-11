#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/EAIAttitude.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct AttitudeAgent; }

namespace game::events
{
struct AttitudeChangedEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsAttitudeChangedEvent";
    static constexpr const char* ALIAS = "AttitudeChangedEvent";

    WeakHandle<game::AttitudeAgent> otherAgent; // 40
    EAIAttitude attitude; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(AttitudeChangedEvent, 0x58);
} // namespace game::events
using gameeventsAttitudeChangedEvent = game::events::AttitudeChangedEvent;
using AttitudeChangedEvent = game::events::AttitudeChangedEvent;
} // namespace RED4ext

// clang-format on
