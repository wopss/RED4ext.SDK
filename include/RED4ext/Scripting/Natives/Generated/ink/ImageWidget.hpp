#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BrushMirrorType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BrushTileType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EHorizontalAlign.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EVerticalAlign.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LeafWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>

namespace RED4ext
{
namespace ink { struct TextureAtlas; }

namespace ink { 
struct ImageWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkImageWidget";
    static constexpr const char* ALIAS = "inkImage";

    RaRef<ink::TextureAtlas> textureAtlas; // 200
    CName texturePart; // 208
    CName externalDynamicTexture; // 210
    ink::EHorizontalAlign contentHAlign; // 218
    ink::EVerticalAlign contentVAlign; // 219
    ink::BrushMirrorType mirrorType; // 21A
    ink::BrushTileType tileType; // 21B
    bool useExternalDynamicTexture; // 21C
    bool useNineSliceScale; // 21D
    uint8_t unk21E[0x220 - 0x21E]; // 21E
    ink::Margin nineSliceScale; // 220
    ink::EHorizontalAlign tileHAlign; // 230
    ink::EVerticalAlign tileVAlign; // 231
    uint8_t unk232[0x330 - 0x232]; // 232
};
RED4EXT_ASSERT_SIZE(ImageWidget, 0x330);
} // namespace ink
using inkImage = ink::ImageWidget;
} // namespace RED4ext
