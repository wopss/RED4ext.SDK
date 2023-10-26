#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/PhysicalTriggerComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) PhysicalImpulseAreaComponent : ent::PhysicalTriggerComponent
{
    static constexpr const char* NAME = "entPhysicalImpulseAreaComponent";
    static constexpr const char* ALIAS = NAME;

    Vector3 impulse; // 190
    float impulseRadius; // 19C
};
RED4EXT_ASSERT_SIZE(PhysicalImpulseAreaComponent, 0x1A0);
} // namespace ent
using entPhysicalImpulseAreaComponent = ent::PhysicalImpulseAreaComponent;
} // namespace RED4ext

// clang-format on
