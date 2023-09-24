#pragma once

// clang-format off

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
namespace world
{
struct AdvertisementNode : world::StaticMeshNode
{
    static constexpr const char* NAME = "worldAdvertisementNode";
    static constexpr const char* ALIAS = NAME;

    Vector3 meshInitialScale; // 60
    AdvertisementFormat format; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
    TweakDBID adGroupTDBID; // 70
    uint8_t unk78[0x80 - 0x78]; // 78
    bool enableOverride; // 80
    uint8_t unk81[0x84 - 0x81]; // 81
    TweakDBID adOverrideTDBID; // 84
    uint32_t adVersion; // 8C
    float glitchValue; // 90
    uint8_t unk94[0xB0 - 0x94]; // 94
    DynArray<world::AdvertisementLightData> lightsData; // B0
    uint8_t unkC0[0xC8 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(AdvertisementNode, 0xC8);
} // namespace world
using worldAdvertisementNode = world::AdvertisementNode;
} // namespace RED4ext

// clang-format on
