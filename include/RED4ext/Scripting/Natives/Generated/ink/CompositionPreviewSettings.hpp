#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ETextureResolution.hpp>

namespace RED4ext
{
struct CBitmapTexture;
namespace ink { struct TextureAtlas; }

namespace ink
{
struct CompositionPreviewSettings : ISerializable
{
    static constexpr const char* NAME = "inkCompositionPreviewSettings";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x60 - 0x30]; // 30
    ink::ETextureResolution previewResolution; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
    CName sourceState; // 68
    CName targetState; // 70
    CName texturePart; // 78
    RaRef<CBitmapTexture> gameFrameTexture; // 80
    RaRef<ink::TextureAtlas> textureAtlas; // 88
};
RED4EXT_ASSERT_SIZE(CompositionPreviewSettings, 0x90);
} // namespace ink
using inkCompositionPreviewSettings = ink::CompositionPreviewSettings;
} // namespace RED4ext

// clang-format on
