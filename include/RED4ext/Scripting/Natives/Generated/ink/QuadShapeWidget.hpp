#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BaseShapeWidget.hpp>

namespace RED4ext
{
namespace ink { struct TextureAtlas; }

namespace ink { 
struct QuadShapeWidget : ink::BaseShapeWidget
{
    static constexpr const char* NAME = "inkQuadShapeWidget";
    static constexpr const char* ALIAS = NAME;

    RaRef<ink::TextureAtlas> textureAtlas; // 220
    CName texturePart; // 228
    uint8_t unk230[0x270 - 0x230]; // 230
};
RED4EXT_ASSERT_SIZE(QuadShapeWidget, 0x270);
} // namespace ink
} // namespace RED4ext
