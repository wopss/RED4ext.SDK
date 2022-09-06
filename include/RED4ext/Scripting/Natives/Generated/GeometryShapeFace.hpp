#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
struct GeometryShapeFace
{
    static constexpr const char* NAME = "GeometryShapeFace";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint32_t> indices; // 00
};
RED4EXT_ASSERT_SIZE(GeometryShapeFace, 0x10);
} // namespace RED4ext

// clang-format on
