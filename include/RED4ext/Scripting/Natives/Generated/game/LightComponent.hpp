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

    bool emissiveOnly; // 200
    bool turnOnByDefault; // 201
    game::EMaterialZone materialZone; // 202
    uint8_t unk203[0x208 - 0x203]; // 203
    CName meshBrokenAppearance; // 208
    float onStrength; // 210
    float turnOnTime; // 214
    CName turnOnCurve; // 218
    float turnOffTime; // 220
    uint8_t unk224[0x228 - 0x224]; // 224
    CName turnOffCurve; // 228
    float loopTime; // 230
    uint8_t unk234[0x238 - 0x234]; // 234
    CName loopCurve; // 238
    bool isDestructible; // 240
    uint8_t unk241[0x248 - 0x241]; // 241
    CName colliderName; // 248
    CName colliderTag; // 250
    RaRef<world::Effect> destructionEffect; // 258
    uint8_t unk260[0x2F0 - 0x260]; // 260
};
RED4EXT_ASSERT_SIZE(LightComponent, 0x2F0);
} // namespace game
} // namespace RED4ext
