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

    Ref<ink::ShapeCollectionResource> shapeResource; // 240
    CName shapeName; // 258
    bool keepInBounds; // 260
    uint8_t unk261[0x264 - 0x261]; // 261
    float lineThickness; // 264
    uint8_t unk268[0x270 - 0x268]; // 268
    HDRColor borderColor; // 270
    float borderOpacity; // 280
    float fillOpacity; // 284
    ink::EShapeVariant shapeVariant; // 288
    ink::EEndCapStyle endCapStyle; // 28C
    ink::EJointStyle jointStyle; // 290
    ink::EHorizontalAlign contentHAlign; // 294
    ink::EVerticalAlign contentVAlign; // 295
    bool useNineSlice; // 296
    uint8_t unk297[0x298 - 0x297]; // 297
    ink::Margin nineSliceScale; // 298
    uint8_t unk2A8[0x380 - 0x2A8]; // 2A8
};
RED4EXT_ASSERT_SIZE(ShapeWidget, 0x380);
} // namespace ink
using inkShapeWidget = ink::ShapeWidget;
using inkShape = ink::ShapeWidget;
} // namespace RED4ext

// clang-format on
