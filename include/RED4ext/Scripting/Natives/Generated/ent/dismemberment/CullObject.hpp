#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Plane.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace ent::dismemberment
{
struct __declspec(align(0x10)) CullObject
{
    static constexpr const char* NAME = "entdismembermentCullObject";
    static constexpr const char* ALIAS = NAME;

    Plane Plane_; // 00 -- Plane
    Plane Plane1; // 10
    Vector3 CapsulePointA; // 20
    float CapsuleRadius; // 2C
    Vector3 CapsulePointB; // 30
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    CName NearestAnimBoneName; // 40
    int16_t NearestAnimIndex; // 48
    uint16_t RagdollBodyIndex; // 4A
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(CullObject, 0x50);
} // namespace ent::dismemberment
using entdismembermentCullObject = ent::dismemberment::CullObject;
} // namespace RED4ext

// clang-format on
