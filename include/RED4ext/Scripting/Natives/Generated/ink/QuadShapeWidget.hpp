#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BaseShapeWidget.hpp>

namespace RED4ext
{
namespace ink { struct TextureAtlas; }

namespace ink
{
struct __declspec(align(0x10)) QuadShapeWidget : ink::BaseShapeWidget
{
    static constexpr const char* NAME = "inkQuadShapeWidget";
    static constexpr const char* ALIAS = "inkQuadShape";

    RaRef<ink::TextureAtlas> textureAtlas; // 230
    CName texturePart; // 238
    uint8_t unk240[0x280 - 0x240]; // 240
};
RED4EXT_ASSERT_SIZE(QuadShapeWidget, 0x280);
} // namespace ink
using inkQuadShapeWidget = ink::QuadShapeWidget;
using inkQuadShape = ink::QuadShapeWidget;
} // namespace RED4ext

// clang-format on
