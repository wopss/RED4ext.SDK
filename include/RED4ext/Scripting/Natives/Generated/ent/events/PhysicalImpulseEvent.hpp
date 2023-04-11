#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent::events
{
struct PhysicalImpulseEvent : red::Event
{
    static constexpr const char* NAME = "enteventsPhysicalImpulseEvent";
    static constexpr const char* ALIAS = "PhysicalImpulseEvent";

    uint32_t bodyIndex; // 40
    Vector3 worldImpulse; // 44
    Vector3 worldPosition; // 50
    float radius; // 5C
    uint32_t shapeIndex; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(PhysicalImpulseEvent, 0x68);
} // namespace ent::events
using enteventsPhysicalImpulseEvent = ent::events::PhysicalImpulseEvent;
using PhysicalImpulseEvent = ent::events::PhysicalImpulseEvent;
} // namespace RED4ext

// clang-format on
