#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) Tetrahedron
{
    static constexpr const char* NAME = "Tetrahedron";
    static constexpr const char* ALIAS = NAME;

    Vector4 point1; // 00
    Vector4 point2; // 10
    Vector4 point3; // 20
    Vector4 point4; // 30
};
RED4EXT_ASSERT_SIZE(Tetrahedron, 0x40);
} // namespace RED4ext

// clang-format on
