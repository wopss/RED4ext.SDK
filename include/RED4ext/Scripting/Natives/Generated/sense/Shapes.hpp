#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace sense { struct IShape; }

namespace sense
{
struct Shapes
{
    static constexpr const char* NAME = "senseShapes";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<sense::IShape>> shapes; // 00
};
RED4EXT_ASSERT_SIZE(Shapes, 0x10);
} // namespace sense
using senseShapes = sense::Shapes;
} // namespace RED4ext

// clang-format on
