#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PhysicalTriggerAreaNode.hpp>

namespace RED4ext
{
namespace world { 
struct PhysicalImpulseAreaNode : world::PhysicalTriggerAreaNode
{
    static constexpr const char* NAME = "worldPhysicalImpulseAreaNode";
    static constexpr const char* ALIAS = NAME;

    Vector3 impulse; // 80
    float impulseRadius; // 8C
};
RED4EXT_ASSERT_SIZE(PhysicalImpulseAreaNode, 0x90);
} // namespace world
} // namespace RED4ext
