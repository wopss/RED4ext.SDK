#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/RectF.hpp>

namespace RED4ext
{
namespace ink
{
struct TextureAtlasSlice
{
    static constexpr const char* NAME = "inkTextureAtlasSlice";
    static constexpr const char* ALIAS = NAME;

    CName partName; // 00
    RectF nineSliceScaleRect; // 08
};
RED4EXT_ASSERT_SIZE(TextureAtlasSlice, 0x18);
} // namespace ink
using inkTextureAtlasSlice = ink::TextureAtlasSlice;
} // namespace RED4ext

// clang-format on
