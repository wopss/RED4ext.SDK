#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/CResource.hpp>
#include <RED4ext/Types/generated/WorldLightingConfig.hpp>
#include <RED4ext/Types/generated/WorldRenderAreaSettings.hpp>
#include <RED4ext/Types/generated/WorldShadowConfig.hpp>
#include <RED4ext/Types/generated/world/WeatherState.hpp>

namespace RED4ext
{
namespace world { struct EnvironmentAreaParameters; }

namespace world { 
struct EnvironmentDefinition : CResource
{
    static constexpr const char* NAME = "worldEnvironmentDefinition";
    static constexpr const char* ALIAS = NAME;

    WorldRenderAreaSettings worldRenderSettings; // 40
    WorldShadowConfig worldShadowConfig; // 50
    WorldLightingConfig worldLightingConfig; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    DynArray<world::WeatherState> weatherStates; // 80
    DynArray<Ref<world::EnvironmentAreaParameters>> areaEnvironmentParameterLayers; // 90
    uint8_t unkA0[0xB0 - 0xA0]; // A0
    bool resaved; // B0
    uint8_t unkB1[0xB8 - 0xB1]; // B1
};
RED4EXT_ASSERT_SIZE(EnvironmentDefinition, 0xB8);
} // namespace world
} // namespace RED4ext
