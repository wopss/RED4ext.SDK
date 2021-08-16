#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AdvertisementFormat.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AdvertisementLightData.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StaticMeshNode.hpp>

namespace RED4ext
{
namespace world { 
struct AdvertisementNode : world::StaticMeshNode
{
    static constexpr const char* NAME = "worldAdvertisementNode";
    static constexpr const char* ALIAS = NAME;

    Vector3 meshInitialScale; // 58
    AdvertisementFormat format; // 64
    uint8_t unk65[0x68 - 0x65]; // 65
    TweakDBID adGroupTDBID; // 68
    uint8_t unk70[0x78 - 0x70]; // 70
    bool enableOverride; // 78
    uint8_t unk79[0x7C - 0x79]; // 79
    TweakDBID adOverrideTDBID; // 7C
    uint32_t adVersion; // 84
    float glitchValue; // 88
    uint8_t unk8C[0xA8 - 0x8C]; // 8C
    DynArray<world::AdvertisementLightData> lightsData; // A8
    uint8_t unkB8[0xC0 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(AdvertisementNode, 0xC0);
} // namespace world
} // namespace RED4ext
