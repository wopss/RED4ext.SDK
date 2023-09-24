#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct CResource;

namespace res
{
struct DlcManifest : CResource
{
    static constexpr const char* NAME = "resDlcManifest";
    static constexpr const char* ALIAS = NAME;

    RaRef<CResource> tweakBlob; // 40
    RaRef<CResource> quest; // 48
    RaRef<CResource> journal; // 50
    RaRef<CResource> factories; // 58
    RaRef<CResource> weaponAppearances; // 60
    RaRef<CResource> vehicleAppearances; // 68
    RaRef<CResource> communitySpawnsets; // 70
    RaRef<CResource> archetypeSet; // 78
    RaRef<CResource> vehicleCovers; // 80
    RaRef<CResource> cookedAudioMetadata; // 88
    RaRef<CResource> voiceTags; // 90
    RaRef<CResource> widgetsLibrariesOverrides; // 98
    RaRef<CResource> gameDefsList; // A0
    RaRef<CResource> cookedMultilayerSetup; // A8
    RaRef<CResource> visualTagsToAppearanceNames; // B0
    RaRef<CResource> appearanceNameToVisualTags; // B8
    RaRef<CResource> defaultAppearances; // C0
    RaRef<CResource> colorVariantsMap; // C8
};
RED4EXT_ASSERT_SIZE(DlcManifest, 0xD0);
} // namespace res
using resDlcManifest = res::DlcManifest;
} // namespace RED4ext

// clang-format on
