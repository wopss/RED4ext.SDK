#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LeafWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/MaskDataSource.hpp>

namespace RED4ext
{
namespace ink { struct TextureAtlas; }

namespace ink { 
struct MaskWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkMaskWidget";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1F0[0x1F8 - 0x1F0]; // 1F0
    float maskTransparency; // 1F8
    uint8_t unk1FC[0x200 - 0x1FC]; // 1FC
    RaRef<ink::TextureAtlas> textureAtlas; // 200
    CName dynamicTextureMask; // 208
    CName texturePart; // 210
    ink::MaskDataSource dataSource; // 218
    bool invertMask; // 219
    uint8_t unk21A[0x270 - 0x21A]; // 21A
};
RED4EXT_ASSERT_SIZE(MaskWidget, 0x270);
} // namespace ink
} // namespace RED4ext
