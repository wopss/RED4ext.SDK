#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
struct IScriptable;

namespace ent::events
{
struct __declspec(align(0x10)) PhysicalCollisionEvent : red::Event
{
    static constexpr const char* NAME = "enteventsPhysicalCollisionEvent";
    static constexpr const char* ALIAS = "PhysicalCollisionEvent";

    WeakHandle<IScriptable> myComponent; // 40
    WeakHandle<IScriptable> otherEntity; // 50
    WeakHandle<IScriptable> otherComponent; // 60
    Vector4 worldPosition; // 70
    Vector4 worldNormal; // 80
    Vector4 deltaVelocity; // 90
    float impulse; // A0
    uint8_t unkA4[0xB0 - 0xA4]; // A4
};
RED4EXT_ASSERT_SIZE(PhysicalCollisionEvent, 0xB0);
} // namespace ent::events
using enteventsPhysicalCollisionEvent = ent::events::PhysicalCollisionEvent;
using PhysicalCollisionEvent = ent::events::PhysicalCollisionEvent;
} // namespace RED4ext

// clang-format on
