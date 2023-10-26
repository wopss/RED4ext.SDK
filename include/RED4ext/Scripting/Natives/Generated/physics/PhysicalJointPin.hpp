#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace physics { struct ISystemObject; }

namespace physics
{
struct __declspec(align(0x10)) PhysicalJointPin : ISerializable
{
    static constexpr const char* NAME = "physicsPhysicalJointPin";
    static constexpr const char* ALIAS = NAME;

    Handle<physics::ISystemObject> object; // 30
    Vector3 localPosition; // 40
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    Quaternion localRotation; // 50
    int32_t featureIndex; // 60
    uint8_t unk64[0x70 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(PhysicalJointPin, 0x70);
} // namespace physics
using physicsPhysicalJointPin = physics::PhysicalJointPin;
} // namespace RED4ext

// clang-format on
