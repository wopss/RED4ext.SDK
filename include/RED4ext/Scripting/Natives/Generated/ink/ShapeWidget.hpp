#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BaseShapeWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EEndCapStyle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EHorizontalAlign.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EJointStyle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EShapeVariant.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EVerticalAlign.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>

namespace RED4ext
{
namespace ink { struct ShapeCollectionResource; }

namespace ink
{
struct __declspec(align(0x10)) ShapeWidget : ink::BaseShapeWidget
{
    static constexpr const char* NAME = "inkShapeWidget";
    static constexpr const char* ALIAS = "inkShape";

    Ref<ink::ShapeCollectionResource> shapeResource; // 230
    CName shapeName; // 248
    bool keepInBounds; // 250
    uint8_t unk251[0x254 - 0x251]; // 251
    float lineThickness; // 254
    uint8_t unk258[0x260 - 0x258]; // 258
    HDRColor borderColor; // 260
    float borderOpacity; // 270
    float fillOpacity; // 274
    ink::EShapeVariant shapeVariant; // 278
    ink::EEndCapStyle endCapStyle; // 27C
    ink::EJointStyle jointStyle; // 280
    ink::EHorizontalAlign contentHAlign; // 284
    ink::EVerticalAlign contentVAlign; // 285
    bool useNineSlice; // 286
    uint8_t unk287[0x288 - 0x287]; // 287
    ink::Margin nineSliceScale; // 288
    uint8_t unk298[0x370 - 0x298]; // 298
};
RED4EXT_ASSERT_SIZE(ShapeWidget, 0x370);
} // namespace ink
using inkShapeWidget = ink::ShapeWidget;
using inkShape = ink::ShapeWidget;
} // namespace RED4ext

// clang-format on
