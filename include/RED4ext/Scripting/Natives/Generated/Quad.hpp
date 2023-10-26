#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) Quad
{
    static constexpr const char* NAME = "Quad";
    static constexpr const char* ALIAS = NAME;

    Vector4 p1; // 00
    Vector4 p2; // 10
    Vector4 p3; // 20
    Vector4 p4; // 30
};
RED4EXT_ASSERT_SIZE(Quad, 0x40);
} // namespace RED4ext

// clang-format on
