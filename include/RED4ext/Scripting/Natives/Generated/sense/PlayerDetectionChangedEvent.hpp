#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace sense
{
struct PlayerDetectionChangedEvent : red::Event
{
    static constexpr const char* NAME = "sensePlayerDetectionChangedEvent";
    static constexpr const char* ALIAS = "PlayerDetectionChangedEvent";

    float oldDetectionValue; // 40
    float newDetectionValue; // 44
};
RED4EXT_ASSERT_SIZE(PlayerDetectionChangedEvent, 0x48);
} // namespace sense
using sensePlayerDetectionChangedEvent = sense::PlayerDetectionChangedEvent;
using PlayerDetectionChangedEvent = sense::PlayerDetectionChangedEvent;
} // namespace RED4ext

// clang-format on
