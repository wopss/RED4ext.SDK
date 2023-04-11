#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/StyleThemeDescriptor.hpp>

namespace RED4ext
{
struct Bink;
struct CResource;
struct JsonResource;
namespace ent { struct EntityTemplate; }
namespace ink { struct FullscreenCompositionResource; }
namespace ink { struct LayersResource; }
namespace ink { struct ShapeCollectionResource; }
namespace ink { struct TextureAtlas; }
namespace ink { struct WidgetLibraryResource; }

namespace ink
{
struct GameSettingsResource : CResource
{
    static constexpr const char* NAME = "inkGameSettingsResource";
    static constexpr const char* ALIAS = NAME;

    Ref<ink::FullscreenCompositionResource> compositionResource; // 40
    DynArray<RaRef<ink::TextureAtlas>> permanentTextureAtlases; // 58
    DynArray<RaRef<ink::TextureAtlas>> permanentTextureAtlasesPC; // 68
    DynArray<RaRef<ink::TextureAtlas>> permanentTextureAtlasesDurango; // 78
    DynArray<RaRef<ink::TextureAtlas>> permanentTextureAtlasesOrbis; // 88
    DynArray<RaRef<ink::TextureAtlas>> permanentTextureAtlasesProspero; // 98
    DynArray<RaRef<ink::TextureAtlas>> permanentTextureAtlasesStadiaSwitch; // A8
    DynArray<RaRef<ink::TextureAtlas>> permanentTextureAtlasesStadia; // B8
    DynArray<RaRef<ink::TextureAtlas>> permanentTextureAtlasesStadiaDurango; // C8
    DynArray<RaRef<ink::TextureAtlas>> permanentTextureAtlasesStadiaOrbis; // D8
    uint8_t unkE8[0xF8 - 0xE8]; // E8
    Ref<ink::LayersResource> layersResource; // F8
    Ref<ink::ShapeCollectionResource> defaultShapeCollectionResource; // 110
    uint8_t unk128[0x140 - 0x128]; // 128
    RaRef<ink::TextureAtlas> iconReferenceFallbackTextureAtlas; // 140
    RaRef<Bink> initLoadingScreenLogoLoopVideo; // 148
    RaRef<JsonResource> globalTVBinkLengthDataResource; // 150
    RaRef<ink::WidgetLibraryResource> npcNameplateResource; // 158
    RaRef<ink::WidgetLibraryResource> worldMapFloorplanWidgetResource; // 160
    RaRef<CResource> malePresetResource; // 168
    RaRef<CResource> femalePresetResource; // 170
    RaRef<CResource> fallbackHeadCustomizationFpp; // 178
    RaRef<CResource> fallbackHeadCustomizationTpp; // 180
    RaRef<CResource> fallbackHeadCustomizationTppFaceRig; // 188
    RaRef<CResource> fallbackBodyCustomization; // 190
    RaRef<CResource> fallbackArmsCustomization; // 198
    RaRef<CResource> vsetSceneResource; // 1A0
    RaRef<ent::EntityTemplate> gpsAugmentedRealitySignEntity; // 1A8
    RaRef<ink::WidgetLibraryResource> gpsAugmentedRealityWidgetTurnLeft; // 1B0
    RaRef<ink::WidgetLibraryResource> gpsAugmentedRealityWidgetTurnRight; // 1B8
    RaRef<ink::WidgetLibraryResource> gpsAugmentedRealityWidgetTurnBack; // 1C0
    RaRef<ink::TextureAtlas> keyboardIconsAtlas; // 1C8
    RaRef<ink::TextureAtlas> steamIconsAtlas; // 1D0
    RaRef<ink::TextureAtlas> durangoIconsAtlas; // 1D8
    RaRef<ink::TextureAtlas> orbisIconsAtlas; // 1E0
    RaRef<ink::TextureAtlas> prosperoIconsAtlas; // 1E8
    RaRef<ink::TextureAtlas> nintendoSwitchIconsAtlas; // 1F0
    RaRef<ink::TextureAtlas> stadiaIconsAtlas; // 1F8
    RaRef<ink::TextureAtlas> stadiaDurangoIconsAtlas; // 200
    RaRef<ink::TextureAtlas> stadiaOrbisIconsAtlas; // 208
    uint8_t unk210[0x220 - 0x210]; // 210
    DynArray<ink::StyleThemeDescriptor> themes; // 220
    uint8_t unk230[0x238 - 0x230]; // 230
};
RED4EXT_ASSERT_SIZE(GameSettingsResource, 0x238);
} // namespace ink
using inkGameSettingsResource = ink::GameSettingsResource;
} // namespace RED4ext

// clang-format on
