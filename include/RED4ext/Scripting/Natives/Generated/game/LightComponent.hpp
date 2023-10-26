#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/LightComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EMaterialZone.hpp>

namespace RED4ext
{
struct CurveSet;
namespace world { struct Effect; }

namespace game
{
struct __declspec(align(0x10)) LightComponent : ent::LightComponent
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
    bool synchronizedLoop; // 240
    bool isDestructible; // 241
    uint8_t unk242[0x248 - 0x242]; // 242
    CName colliderName; // 248
    CName colliderTag; // 250
    RaRef<world::Effect> destructionEffect; // 258
    Ref<CurveSet> genericCurveSetOverride; // 260
    uint8_t unk278[0x310 - 0x278]; // 278
};
RED4EXT_ASSERT_SIZE(LightComponent, 0x310);
} // namespace game
using gameLightComponent = game::LightComponent;
} // namespace RED4ext

// clang-format on
