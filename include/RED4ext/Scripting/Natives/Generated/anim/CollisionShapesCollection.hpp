#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/CollisionRoundedShape.hpp>

namespace RED4ext
{
namespace anim
{
struct CollisionShapesCollection : ISerializable
{
    static constexpr const char* NAME = "animCollisionShapesCollection";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::CollisionRoundedShape> collisionRoundedShapes; // 30
};
RED4EXT_ASSERT_SIZE(CollisionShapesCollection, 0x40);
} // namespace anim
using animCollisionShapesCollection = anim::CollisionShapesCollection;
} // namespace RED4ext

// clang-format on
