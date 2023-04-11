#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent::events
{
struct PhysicalDeformShapesEvent : red::Event
{
    static constexpr const char* NAME = "enteventsPhysicalDeformShapesEvent";
    static constexpr const char* ALIAS = "PhysicalDeformShapesEvent";

    DynArray<int32_t> shapes; // 40
    uint8_t unk50[0x54 - 0x50]; // 50
    float value; // 54
};
RED4EXT_ASSERT_SIZE(PhysicalDeformShapesEvent, 0x58);
} // namespace ent::events
using enteventsPhysicalDeformShapesEvent = ent::events::PhysicalDeformShapesEvent;
using PhysicalDeformShapesEvent = ent::events::PhysicalDeformShapesEvent;
} // namespace RED4ext

// clang-format on
