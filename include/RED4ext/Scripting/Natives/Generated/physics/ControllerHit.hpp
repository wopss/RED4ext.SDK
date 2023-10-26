#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace physics
{
struct __declspec(align(0x10)) ControllerHit
{
    static constexpr const char* NAME = "physicsControllerHit";
    static constexpr const char* ALIAS = "ControllerHit";

    Vector4 worldPos; // 00
    Vector4 worldNormal; // 10
    uint8_t unk20[0x40 - 0x20]; // 20
};
RED4EXT_ASSERT_SIZE(ControllerHit, 0x40);
} // namespace physics
using physicsControllerHit = physics::ControllerHit;
using ControllerHit = physics::ControllerHit;
} // namespace RED4ext

// clang-format on
