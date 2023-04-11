#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct CBitmapTexture;
struct CMaterialTemplate;
struct IMaterial;
struct JsonResource;
namespace ink { struct FontFamilyResource; }
namespace ink { struct FullscreenCompositionResource; }
namespace ink { struct ShapeCollectionResource; }
namespace ink { struct TextureAtlas; }

namespace ink
{
struct EngineSettingsResource : CResource
{
    static constexpr const char* NAME = "inkEngineSettingsResource";
    static constexpr const char* ALIAS = NAME;

    Ref<ink::FullscreenCompositionResource> fallbackCompositionResource; // 40
    Ref<ink::ShapeCollectionResource> fallbackShapeCollectionResource; // 58
    Ref<ink::TextureAtlas> fallbackIconAtlasResource; // 70
    Ref<ink::TextureAtlas> fallbackTextureAtlas; // 88
    Ref<ink::TextureAtlas> whiteMaskAtlas; // A0
    Ref<ink::FontFamilyResource> fallbackFontFamilyPath; // B8
    Ref<CBitmapTexture> blackTexture; // D0
    Ref<CBitmapTexture> advertMissingFormatTexture; // E8
    Ref<CBitmapTexture> advertWrongResourceTexture; // 100
    Ref<CBitmapTexture> tooManyBinksTexture; // 118
    Ref<CBitmapTexture> componentMissingTexture; // 130
    Ref<IMaterial> imageTilingMaterial; // 148
    Ref<IMaterial> imageNineSliceMaterial; // 160
    Ref<IMaterial> depthMaterial; // 178
    Ref<CMaterialTemplate> defaultBinkMaterial; // 190
    RaRef<JsonResource> inputKeyIconsDefinitionResource; // 1A8
};
RED4EXT_ASSERT_SIZE(EngineSettingsResource, 0x1B0);
} // namespace ink
using inkEngineSettingsResource = ink::EngineSettingsResource;
} // namespace RED4ext

// clang-format on
