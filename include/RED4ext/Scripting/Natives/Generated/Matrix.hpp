#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) Matrix
{
    static constexpr const char* NAME = "Matrix";
    static constexpr const char* ALIAS = NAME;

    Vector4 X; // 00
    Vector4 Y; // 10
    Vector4 Z; // 20
    Vector4 W; // 30
};
RED4EXT_ASSERT_SIZE(Matrix, 0x40);
} // namespace RED4ext

// clang-format on
