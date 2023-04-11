#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextureAtlasMapper.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextureAtlasSlice.hpp>

namespace RED4ext
{
struct CBitmapTexture;

namespace ink
{
struct TextureSlot
{
    static constexpr const char* NAME = "inkTextureSlot";
    static constexpr const char* ALIAS = NAME;

    RaRef<CBitmapTexture> texture; // 00
    DynArray<ink::TextureAtlasMapper> parts; // 08
    DynArray<ink::TextureAtlasSlice> slices; // 18
};
RED4EXT_ASSERT_SIZE(TextureSlot, 0x28);
} // namespace ink
using inkTextureSlot = ink::TextureSlot;
} // namespace RED4ext

// clang-format on
