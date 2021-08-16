#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct FogVolumeComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entFogVolumeComponent";
    static constexpr const char* ALIAS = NAME;

    float blendFalloff; // 140
    float densityFalloff; // 144
    float densityFactor; // 148
    float absorption; // 14C
    Vector3 size; // 150
    Color color; // 15C
    uint8_t unk160[0x170 - 0x160]; // 160
};
RED4EXT_ASSERT_SIZE(FogVolumeComponent, 0x170);
} // namespace ent
} // namespace RED4ext
