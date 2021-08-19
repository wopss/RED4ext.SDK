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
    static constexpr const char* ALIAS = NAME;

    RaRef<ink::TextureAtlas> textureAtlas; // 1F0
    CName texturePart; // 1F8
    CName externalDynamicTexture; // 200
    ink::EHorizontalAlign contentHAlign; // 208
    ink::EVerticalAlign contentVAlign; // 209
    ink::BrushMirrorType mirrorType; // 20A
    ink::BrushTileType tileType; // 20B
    bool useExternalDynamicTexture; // 20C
    bool useNineSliceScale; // 20D
    uint8_t unk20E[0x210 - 0x20E]; // 20E
    ink::Margin nineSliceScale; // 210
    ink::EHorizontalAlign tileHAlign; // 220
    ink::EVerticalAlign tileVAlign; // 221
    uint8_t unk222[0x320 - 0x222]; // 222
};
RED4EXT_ASSERT_SIZE(ImageWidget, 0x320);
} // namespace ink
} // namespace RED4ext
