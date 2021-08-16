#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { 
struct UncontrolledMovementStartEvent : red::Event
{
    static constexpr const char* NAME = "entUncontrolledMovementStartEvent";
    static constexpr const char* ALIAS = "UncontrolledMovementStartEvent";

    float ragdollNoGroundThreshold; // 40
    bool ragdollOnCollision; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
};
RED4EXT_ASSERT_SIZE(UncontrolledMovementStartEvent, 0x48);
} // namespace ent
using UncontrolledMovementStartEvent = ent::UncontrolledMovementStartEvent;
} // namespace RED4ext
