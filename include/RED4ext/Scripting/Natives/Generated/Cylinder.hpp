#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) Cylinder
{
    static constexpr const char* NAME = "Cylinder";
    static constexpr const char* ALIAS = NAME;

    Vector4 positionAndRadius; // 00
    Vector4 normalAndHeight; // 10
};
RED4EXT_ASSERT_SIZE(Cylinder, 0x20);
} // namespace RED4ext

// clang-format on
