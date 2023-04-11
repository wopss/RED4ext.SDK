#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderSettingFactors.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldLightingConfig.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldRenderAreaSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldShadowConfig.hpp>

namespace RED4ext
{
namespace world { struct EnvironmentAreaParameters; }
namespace world { struct WeatherState; }
namespace world { struct WeatherStateTransition; }

namespace world
{
struct EnvironmentDefinition : CResource
{
    static constexpr const char* NAME = "worldEnvironmentDefinition";
    static constexpr const char* ALIAS = NAME;

    WorldRenderAreaSettings worldRenderSettings; // 40
    WorldShadowConfig worldShadowConfig; // 50
    WorldLightingConfig worldLightingConfig; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    RenderSettingFactors renderSettingFactors; // 80
    DynArray<Ref<world::EnvironmentAreaParameters>> areaEnvironmentParameterLayers; // 160
    uint8_t unk170[0x180 - 0x170]; // 170
    uint8_t resourceVersion; // 180
    uint8_t unk181[0x188 - 0x181]; // 181
    DynArray<Handle<world::WeatherState>> weatherStates; // 188
    DynArray<Handle<world::WeatherStateTransition>> weatherStateTransitions; // 198
};
RED4EXT_ASSERT_SIZE(EnvironmentDefinition, 0x1A8);
} // namespace world
using worldEnvironmentDefinition = world::EnvironmentDefinition;
} // namespace RED4ext

// clang-format on
