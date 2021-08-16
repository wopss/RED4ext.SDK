#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/ShapeType.hpp>

namespace RED4ext
{
namespace physics { 
struct TriggerShape
{
    static constexpr const char* NAME = "physicsTriggerShape";
    static constexpr const char* ALIAS = NAME;

    physics::ShapeType shapeType; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    Vector3 shapeSize; // 04
    Transform shapeLocalPose; // 10
};
RED4EXT_ASSERT_SIZE(TriggerShape, 0x30);
} // namespace physics
} // namespace RED4ext
