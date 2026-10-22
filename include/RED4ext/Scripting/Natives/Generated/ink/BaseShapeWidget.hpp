#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
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

    uint8_t unk210[0x218 - 0x210]; // 210
    DynArray<Vector2> vertexList; // 218
    uint8_t unk228[0x240 - 0x228]; // 228
};
RED4EXT_ASSERT_SIZE(BaseShapeWidget, 0x240);
} // namespace ink
using inkBaseShapeWidget = ink::BaseShapeWidget;
using inkBaseShape = ink::BaseShapeWidget;
} // namespace RED4ext

// clang-format on
