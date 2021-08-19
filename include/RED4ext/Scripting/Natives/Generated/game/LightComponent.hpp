#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/LightComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EMaterialZone.hpp>

namespace RED4ext
{
namespace world { struct Effect; }

namespace game { 
struct LightComponent : ent::LightComponent
{
    static constexpr const char* NAME = "gameLightComponent";
    static constexpr const char* ALIAS = NAME;

    bool emissiveOnly; // 1F0
    bool turnOnByDefault; // 1F1
    game::EMaterialZone materialZone; // 1F2
    uint8_t unk1F3[0x1F8 - 0x1F3]; // 1F3
    CName meshBrokenAppearance; // 1F8
    float onStrength; // 200
    float turnOnTime; // 204
    CName turnOnCurve; // 208
    float turnOffTime; // 210
    uint8_t unk214[0x218 - 0x214]; // 214
    CName turnOffCurve; // 218
    float loopTime; // 220
    uint8_t unk224[0x228 - 0x224]; // 224
    CName loopCurve; // 228
    bool isDestructible; // 230
    uint8_t unk231[0x238 - 0x231]; // 231
    CName colliderName; // 238
    CName colliderTag; // 240
    RaRef<world::Effect> destructionEffect; // 248
    uint8_t unk250[0x2E0 - 0x250]; // 250
};
RED4EXT_ASSERT_SIZE(LightComponent, 0x2E0);
} // namespace game
} // namespace RED4ext
