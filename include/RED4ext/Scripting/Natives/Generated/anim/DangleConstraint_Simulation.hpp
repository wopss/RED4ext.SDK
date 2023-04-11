#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/CollisionRoundedShape.hpp>

namespace RED4ext
{
struct JsonResource;

namespace anim
{
struct DangleConstraint_Simulation : ISerializable
{
    static constexpr const char* NAME = "animDangleConstraint_Simulation";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::CollisionRoundedShape> collisionRoundedShapes; // 30
    Ref<JsonResource> jsonCollisionShapes; // 40
    bool jsonCollisionShapesLoadedSuccessfully; // 58
    uint8_t unk59[0x5C - 0x59]; // 59
    float alpha; // 5C
    bool rotateParentToLookAtDangle; // 60
    bool parentRotationAltersTransformsOfDangleAndItsChildren; // 61
    bool parentRotationAltersTransformsOfNonDanglesAndItsChildren; // 62
    bool dangleAltersTransformsOfItsChildren; // 63
    uint8_t unk64[0x78 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(DangleConstraint_Simulation, 0x78);
} // namespace anim
using animDangleConstraint_Simulation = anim::DangleConstraint_Simulation;
} // namespace RED4ext

// clang-format on
