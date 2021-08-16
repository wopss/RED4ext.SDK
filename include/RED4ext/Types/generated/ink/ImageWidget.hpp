#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ink/BrushMirrorType.hpp>
#include <RED4ext/Types/generated/ink/BrushTileType.hpp>
#include <RED4ext/Types/generated/ink/EHorizontalAlign.hpp>
#include <RED4ext/Types/generated/ink/EVerticalAlign.hpp>
#include <RED4ext/Types/generated/ink/LeafWidget.hpp>
#include <RED4ext/Types/generated/ink/Margin.hpp>

namespace RED4ext
{
namespace ink { struct TextureAtlas; }

namespace ink { 
struct ImageWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkImageWidget";
    static constexpr const char* ALIAS = "inkImage";

    RaRef<ink::TextureAtlas> textureAtlas; // 1F0
    CName texturePart; // 1F8
    ink::EHorizontalAlign contentHAlign; // 200
    ink::EVerticalAlign contentVAlign; // 201
    ink::BrushMirrorType mirrorType; // 202
    ink::BrushTileType tileType; // 203
    bool useNineSliceScale; // 204
    uint8_t unk205[0x208 - 0x205]; // 205
    ink::Margin nineSliceScale; // 208
    ink::EHorizontalAlign tileHAlign; // 218
    ink::EVerticalAlign tileVAlign; // 219
    uint8_t unk21A[0x310 - 0x21A]; // 21A
};
RED4EXT_ASSERT_SIZE(ImageWidget, 0x310);
} // namespace ink
using inkImage = ink::ImageWidget;
} // namespace RED4ext
