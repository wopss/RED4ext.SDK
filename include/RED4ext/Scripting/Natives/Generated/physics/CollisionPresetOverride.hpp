#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace physics
{
struct CollisionPresetOverride
{
    static constexpr const char* NAME = "physicsCollisionPresetOverride";
    static constexpr const char* ALIAS = NAME;

    CName from; // 00
    CName to; // 08
};
RED4EXT_ASSERT_SIZE(CollisionPresetOverride, 0x10);
} // namespace physics
using physicsCollisionPresetOverride = physics::CollisionPresetOverride;
} // namespace RED4ext

// clang-format on
