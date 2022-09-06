#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/GeometryShapeFace.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
struct GeometryShape : ISerializable
{
    static constexpr const char* NAME = "GeometryShape";
    static constexpr const char* ALIAS = NAME;

    DynArray<Vector3> vertices; // 30
    DynArray<uint16_t> indices; // 40
    DynArray<GeometryShapeFace> faces; // 50
};
RED4EXT_ASSERT_SIZE(GeometryShape, 0x60);
} // namespace RED4ext

// clang-format on
