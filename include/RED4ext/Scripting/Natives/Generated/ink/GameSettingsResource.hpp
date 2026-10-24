#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
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
    DynArray<RaRef<ink::TextureAtlas>> permanentTextureAtlasesSwitch; // E8
    DynArray<RaRef<ink::TextureAtlas>> permanentTextureAtlasesSwitchTouch; // F8
    uint8_t unk108[0x118 - 0x108]; // 108
    Ref<ink::LayersResource> layersResource; // 118
    Ref<ink::ShapeCollectionResource> defaultShapeCollectionResource; // 130
    uint8_t unk148[0x160 - 0x148]; // 148
    RaRef<ink::TextureAtlas> iconReferenceFallbackTextureAtlas; // 160
    RaRef<Bink> initLoadingScreenLogoLoopVideo; // 168
    RaRef<JsonResource> globalTVBinkLengthDataResource; // 170
    RaRef<ink::WidgetLibraryResource> npcNameplateResource; // 178
    RaRef<ink::WidgetLibraryResource> worldMapFloorplanWidgetResource; // 180
    RaRef<CResource> malePresetResource; // 188
    RaRef<CResource> femalePresetResource; // 190
    RaRef<CResource> fallbackHeadCustomizationFpp; // 198
    RaRef<CResource> fallbackHeadCustomizationTpp; // 1A0
    RaRef<CResource> fallbackHeadCustomizationTppFaceRig; // 1A8
    RaRef<CResource> fallbackBodyCustomization; // 1B0
    RaRef<CResource> fallbackArmsCustomization; // 1B8
    RaRef<CResource> vsetSceneResource; // 1C0
    RaRef<ent::EntityTemplate> gpsAugmentedRealitySignEntity; // 1C8
    RaRef<ink::WidgetLibraryResource> gpsAugmentedRealityWidgetTurnLeft; // 1D0
    RaRef<ink::WidgetLibraryResource> gpsAugmentedRealityWidgetTurnRight; // 1D8
    RaRef<ink::WidgetLibraryResource> gpsAugmentedRealityWidgetTurnBack; // 1E0
    RaRef<ink::TextureAtlas> keyboardIconsAtlas; // 1E8
    RaRef<ink::TextureAtlas> steamIconsAtlas; // 1F0
    RaRef<ink::TextureAtlas> durangoIconsAtlas; // 1F8
    RaRef<ink::TextureAtlas> orbisIconsAtlas; // 200
    RaRef<ink::TextureAtlas> prosperoIconsAtlas; // 208
    RaRef<ink::TextureAtlas> nintendoSwitchIconsAtlas; // 210
    RaRef<ink::TextureAtlas> nintendoSwitchTouchIconsAtlas; // 218
    RaRef<ink::TextureAtlas> stadiaIconsAtlas; // 220
    RaRef<ink::TextureAtlas> stadiaDurangoIconsAtlas; // 228
    RaRef<ink::TextureAtlas> stadiaOrbisIconsAtlas; // 230
    uint8_t unk238[0x248 - 0x238]; // 238
    DynArray<ink::StyleThemeDescriptor> themes; // 248
    uint8_t unk258[0x260 - 0x258]; // 258
};
RED4EXT_ASSERT_SIZE(GameSettingsResource, 0x260);
} // namespace ink
using inkGameSettingsResource = ink::GameSettingsResource;
} // namespace RED4ext

// clang-format on
