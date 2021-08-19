#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GameTime.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/LightComponent.hpp>

namespace RED4ext
{
namespace cp { 
struct GameplayLightComponent : ent::LightComponent
{
    static constexpr const char* NAME = "cpGameplayLightComponent";
    static constexpr const char* ALIAS = NAME;

    bool reactToTime; // 1F0
    uint8_t unk1F1[0x1F4 - 0x1F1]; // 1F1
    GameTime begin; // 1F4
    GameTime end; // 1F8
    float probability; // 1FC
    GameTime delayRange; // 200
    uint8_t unk204[0x210 - 0x204]; // 204
};
RED4EXT_ASSERT_SIZE(GameplayLightComponent, 0x210);
} // namespace cp
} // namespace RED4ext
