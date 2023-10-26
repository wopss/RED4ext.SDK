#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/RagdollBodyPartE.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/RagdollShapeType.hpp>

namespace RED4ext
{
namespace physics
{
struct __declspec(align(0x10)) RagdollBodyInfo
{
    static constexpr const char* NAME = "physicsRagdollBodyInfo";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
    int32_t ParentAnimIndex; // 10
    int32_t ChildAnimIndex; // 14
    int32_t ParentBodyIndex; // 18
    physics::RagdollBodyPartE BodyPart; // 1C
    NativeArray<float, 2> SwingAnglesY; // 20
    NativeArray<float, 2> SwingAnglesZ; // 28
    NativeArray<float, 2> TwistAngles; // 30
    physics::RagdollShapeType ShapeType; // 38
    uint8_t unk39[0x3C - 0x39]; // 39
    float ShapeRadius; // 3C
    float HalfHeight; // 40
    Vector3 ShapeLocalTranslation; // 44
    Quaternion ShapeLocalRotation; // 50
    CName FilterDataOverride; // 60
    bool IsStiff; // 68
    bool ExcludeFromEarlyCollision; // 69
    bool IsRootDisplacementPart; // 6A
    uint8_t unk6B[0x70 - 0x6B]; // 6B
};
RED4EXT_ASSERT_SIZE(RagdollBodyInfo, 0x70);
} // namespace physics
using physicsRagdollBodyInfo = physics::RagdollBodyInfo;
} // namespace RED4ext

// clang-format on
