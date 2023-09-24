#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/DynamicTextureSlot.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ETextureResolution.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextureAtlasMapper.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextureAtlasSlice.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextureType.hpp>

namespace RED4ext
{
struct CBitmapTexture;
struct DynamicTexture;

namespace ink
{
struct TextureAtlas : CResource
{
    static constexpr const char* NAME = "inkTextureAtlas";
    static constexpr const char* ALIAS = NAME;

    ink::TextureType activeTexture; // 40
    ink::ETextureResolution textureResolution; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
    RaRef<CBitmapTexture> texture; // 48
    uint8_t unk50[0x60 - 0x50]; // 50
    RaRef<DynamicTexture> dynamicTexture; // 60
    uint8_t unk68[0x78 - 0x68]; // 68
    DynArray<ink::TextureAtlasSlice> slices; // 78
    DynArray<ink::TextureAtlasMapper> parts; // 88
    std::array<uint8_t, 120>/* UNHANDLED: [3]inkTextureSlot (RT_FixedArray) */ slots; // 98
    ink::DynamicTextureSlot dynamicTextureSlot; // 110
    bool isSingleTextureMode; // 128
    uint8_t unk129[0x138 - 0x129]; // 129
};
RED4EXT_ASSERT_SIZE(TextureAtlas, 0x138);
} // namespace ink
using inkTextureAtlas = ink::TextureAtlas;
} // namespace RED4ext

// clang-format on
