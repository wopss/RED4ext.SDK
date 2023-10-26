#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PhysicalTriggerAreaNode.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) PhysicalImpulseAreaNode : world::PhysicalTriggerAreaNode
{
    static constexpr const char* NAME = "worldPhysicalImpulseAreaNode";
    static constexpr const char* ALIAS = NAME;

    Vector3 impulse; // 80
    float impulseRadius; // 8C
};
RED4EXT_ASSERT_SIZE(PhysicalImpulseAreaNode, 0x90);
} // namespace world
using worldPhysicalImpulseAreaNode = world::PhysicalImpulseAreaNode;
} // namespace RED4ext

// clang-format on
