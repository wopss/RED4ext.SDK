#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct CResource;

namespace res { 
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
};
RED4EXT_ASSERT_SIZE(DlcManifest, 0x78);
} // namespace res
} // namespace RED4ext
