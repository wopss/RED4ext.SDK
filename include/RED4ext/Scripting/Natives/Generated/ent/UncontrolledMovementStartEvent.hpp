#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct UncontrolledMovementStartEvent : red::Event
{
    static constexpr const char* NAME = "entUncontrolledMovementStartEvent";
    static constexpr const char* ALIAS = "UncontrolledMovementStartEvent";

    float ragdollNoGroundThreshold; // 40
    bool ragdollOnCollision; // 44
    bool calculateEarlyPositionGroundHeight; // 45
    uint8_t unk46[0x48 - 0x46]; // 46
};
RED4EXT_ASSERT_SIZE(UncontrolledMovementStartEvent, 0x48);
} // namespace ent
using entUncontrolledMovementStartEvent = ent::UncontrolledMovementStartEvent;
using UncontrolledMovementStartEvent = ent::UncontrolledMovementStartEvent;
} // namespace RED4ext

// clang-format on
