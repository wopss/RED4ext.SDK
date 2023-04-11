#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
namespace ink
{
struct ShapePreset
{
    static constexpr const char* NAME = "inkShapePreset";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    DynArray<Vector2> points; // 08
};
RED4EXT_ASSERT_SIZE(ShapePreset, 0x18);
} // namespace ink
using inkShapePreset = ink::ShapePreset;
} // namespace RED4ext

// clang-format on
