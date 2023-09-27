#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace sense
{
struct SensorOwnerChangedEvent : red::Event
{
    static constexpr const char* NAME = "senseSensorOwnerChangedEvent";
    static constexpr const char* ALIAS = "SensorOwnerChangedEvent";

    ent::EntityID newOwnerId; // 40
};
RED4EXT_ASSERT_SIZE(SensorOwnerChangedEvent, 0x48);
} // namespace sense
using senseSensorOwnerChangedEvent = sense::SensorOwnerChangedEvent;
using SensorOwnerChangedEvent = sense::SensorOwnerChangedEvent;
} // namespace RED4ext

// clang-format on
