#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace nav::gendebug
{
struct InputGeometryTriangle
{
    static constexpr const char* NAME = "navgendebugInputGeometryTriangle";
    static constexpr const char* ALIAS = NAME;

    NativeArray<Vector3, 3> vertices; // 00
    uint8_t area; // 24
    uint8_t unk25[0x28 - 0x25]; // 25
};
RED4EXT_ASSERT_SIZE(InputGeometryTriangle, 0x28);
} // namespace nav::gendebug
using navgendebugInputGeometryTriangle = nav::gendebug::InputGeometryTriangle;
} // namespace RED4ext

// clang-format on
