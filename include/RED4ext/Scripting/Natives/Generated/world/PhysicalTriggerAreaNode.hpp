#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/TriggerShape.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace world
{
struct __declspec(align(0x10)) PhysicalTriggerAreaNode : world::Node
{
    static constexpr const char* NAME = "worldPhysicalTriggerAreaNode";
    static constexpr const char* ALIAS = NAME;

    physics::SimulationType simulationType; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    Handle<physics::FilterData> filterData; // 40
    physics::TriggerShape shape; // 50
};
RED4EXT_ASSERT_SIZE(PhysicalTriggerAreaNode, 0x80);
} // namespace world
using worldPhysicalTriggerAreaNode = world::PhysicalTriggerAreaNode;
} // namespace RED4ext

// clang-format on
