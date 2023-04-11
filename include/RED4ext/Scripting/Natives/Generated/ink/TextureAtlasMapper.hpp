#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Rect.hpp>
#include <RED4ext/Scripting/Natives/Generated/RectF.hpp>

namespace RED4ext
{
namespace ink
{
struct TextureAtlasMapper
{
    static constexpr const char* NAME = "inkTextureAtlasMapper";
    static constexpr const char* ALIAS = NAME;

    CName partName; // 00
    Rect clippingRectInPixels; // 08
    RectF clippingRectInUVCoords; // 18
};
RED4EXT_ASSERT_SIZE(TextureAtlasMapper, 0x28);
} // namespace ink
using inkTextureAtlasMapper = ink::TextureAtlasMapper;
} // namespace RED4ext

// clang-format on
