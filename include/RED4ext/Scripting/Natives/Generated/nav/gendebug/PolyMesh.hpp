#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/nav/gendebug/CompactPolygon.hpp>

namespace RED4ext
{
namespace nav::gendebug
{
struct __declspec(align(0x10)) PolyMesh : ISerializable
{
    static constexpr const char* NAME = "navgendebugPolyMesh";
    static constexpr const char* ALIAS = NAME;

    DynArray<Vector3> vertices; // 30
    DynArray<nav::gendebug::CompactPolygon> polygons; // 40
    Box bounds; // 50
    float cellSize; // 70
    float cellHeight; // 74
    int32_t borderSize; // 78
    float maxEdgeError; // 7C
    int32_t maxVerticesPerPolygon; // 80
    uint8_t unk84[0x90 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(PolyMesh, 0x90);
} // namespace nav::gendebug
using navgendebugPolyMesh = nav::gendebug::PolyMesh;
} // namespace RED4ext

// clang-format on
