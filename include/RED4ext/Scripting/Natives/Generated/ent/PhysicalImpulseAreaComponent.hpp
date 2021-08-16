#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/PhysicalTriggerComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct PhysicalImpulseAreaComponent : ent::PhysicalTriggerComponent
{
    static constexpr const char* NAME = "entPhysicalImpulseAreaComponent";
    static constexpr const char* ALIAS = NAME;

    Vector3 impulse; // 180
    float impulseRadius; // 18C
};
RED4EXT_ASSERT_SIZE(PhysicalImpulseAreaComponent, 0x190);
} // namespace ent
} // namespace RED4ext
