#pragma once

// clang-format off

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

namespace ink
{
struct __declspec(align(0x10)) MaskWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkMaskWidget";
    static constexpr const char* ALIAS = "inkMask";

    uint8_t unk210[0x218 - 0x210]; // 210
    float maskTransparency; // 218
    uint8_t unk21C[0x220 - 0x21C]; // 21C
    RaRef<ink::TextureAtlas> textureAtlas; // 220
    CName dynamicTextureMask; // 228
    CName texturePart; // 230
    ink::MaskDataSource dataSource; // 238
    bool invertMask; // 239
    uint8_t unk23A[0x290 - 0x23A]; // 23A
};
RED4EXT_ASSERT_SIZE(MaskWidget, 0x290);
} // namespace ink
using inkMaskWidget = ink::MaskWidget;
using inkMask = ink::MaskWidget;
} // namespace RED4ext

// clang-format on
