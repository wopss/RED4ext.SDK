#pragma once

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

namespace ink { 
struct ShapeWidget : ink::BaseShapeWidget
{
    static constexpr const char* NAME = "inkShapeWidget";
    static constexpr const char* ALIAS = "inkShape";

    Ref<ink::ShapeCollectionResource> shapeResource; // 220
    CName shapeName; // 238
    bool keepInBounds; // 240
    uint8_t unk241[0x244 - 0x241]; // 241
    float lineThickness; // 244
    uint8_t unk248[0x250 - 0x248]; // 248
    HDRColor borderColor; // 250
    float borderOpacity; // 260
    float fillOpacity; // 264
    ink::EShapeVariant shapeVariant; // 268
    ink::EEndCapStyle endCapStyle; // 26C
    ink::EJointStyle jointStyle; // 270
    ink::EHorizontalAlign contentHAlign; // 274
    ink::EVerticalAlign contentVAlign; // 275
    bool useNineSlice; // 276
    uint8_t unk277[0x278 - 0x277]; // 277
    ink::Margin nineSliceScale; // 278
    uint8_t unk288[0x360 - 0x288]; // 288
};
RED4EXT_ASSERT_SIZE(ShapeWidget, 0x360);
} // namespace ink
using inkShape = ink::ShapeWidget;
} // namespace RED4ext
