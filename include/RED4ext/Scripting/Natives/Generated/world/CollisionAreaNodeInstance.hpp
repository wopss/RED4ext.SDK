#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) CollisionAreaNodeInstance : world::AreaShapeNodeInstance
{
    static constexpr const char* NAME = "worldCollisionAreaNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0xE0 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(CollisionAreaNodeInstance, 0xE0);
} // namespace world
using worldCollisionAreaNodeInstance = world::CollisionAreaNodeInstance;
} // namespace RED4ext

// clang-format on
