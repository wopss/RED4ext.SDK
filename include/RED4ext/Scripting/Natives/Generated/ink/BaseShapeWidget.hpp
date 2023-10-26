#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LeafWidget.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) BaseShapeWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkBaseShapeWidget";
    static constexpr const char* ALIAS = "inkBaseShape";

    uint8_t unk200[0x208 - 0x200]; // 200
    DynArray<Vector2> vertexList; // 208
    uint8_t unk218[0x230 - 0x218]; // 218
};
RED4EXT_ASSERT_SIZE(BaseShapeWidget, 0x230);
} // namespace ink
using inkBaseShapeWidget = ink::BaseShapeWidget;
using inkBaseShape = ink::BaseShapeWidget;
} // namespace RED4ext

// clang-format on
