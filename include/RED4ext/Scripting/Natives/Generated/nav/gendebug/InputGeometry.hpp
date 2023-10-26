#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/nav/gendebug/InputGeometryTriangle.hpp>

namespace RED4ext
{
namespace nav::gendebug
{
struct __declspec(align(0x10)) InputGeometry
{
    static constexpr const char* NAME = "navgendebugInputGeometry";
    static constexpr const char* ALIAS = NAME;

    DynArray<nav::gendebug::InputGeometryTriangle> triangles; // 00
    Box tileBoundingBox; // 10
    Box extrudedBoundingBox; // 30
};
RED4EXT_ASSERT_SIZE(InputGeometry, 0x50);
} // namespace nav::gendebug
using navgendebugInputGeometry = nav::gendebug::InputGeometry;
} // namespace RED4ext

// clang-format on
